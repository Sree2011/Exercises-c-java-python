-- Put the current date in place of the text {{currentdate}} anywhere in the document.
-- Adapted from [here](https://pandoc.org/lua-filters.html)
return {
    {
        Str = function (elem)
            if elem.text == "{{currentdate}}" then
                return pandoc.Str(os.date("%m/%d/%Y %I:%M %p"))
            else
                return elem
            end
        end
    }
}
