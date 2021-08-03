#include "text.h"
#include <iostream>

std::string unindent(const char* p)
{
    std::string result;
    if (*p == '\n') ++p;
    const char* p_leading = p;
    while (std::isspace(*p) && *p != '\n')
        ++p;
    size_t leading_len = p - p_leading;
    while (*p)
    {
        result += *p;
        if (*p++ == '\n')
        {
            for (size_t i = 0; i < leading_len; ++i)
                if (p[i] != p_leading[i])
                    goto dont_skip_leading;
            p += leading_len;
        }
      dont_skip_leading: ;
    }
    return result;
}