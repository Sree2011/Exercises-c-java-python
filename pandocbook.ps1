
<# POWERSHELL SCRIPT TO CREATE BOOK USING PANDOC UTILTIY
NOTE: THIS IS ONLY FOR WINDOWS PLATFORM

PANDOC OPTIONS:
--toc : CREATES TABLE OF CONTENTS BASED ON LEVELS IN MARKDOWN
-t : DEFINES OUTPUT FORMAT
--highlight-style: STYLE OF HIGHLIGHTING THE CODE BLOCKS IN MARKDOWN
-F mermaid-filter.cmd : ADDING SUPPORT FOR MERMAID DIAGRAMS
Note: .cmd extension is only for windows users.
Mac, Ubuntu users don't need the .cmd extension
-o filename.pdf : Output file name
$(cat includes.txt) : Concatenate multiple markdown files specified in includes.txt
-B title.txt : Add title to the book using contents of title.txt
#>


pandoc --toc -t pdf --highlight-style=espresso -F mermaid-filter.cmd -o Problem_temp.pdf $(cat includes.txt)
pdftk cover4.pdf .\Problem_temp.pdf cat output .\Problem_compilation.pdf
