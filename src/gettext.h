// $Id: gettext.h 9360 2014-04-25 15:45:29Z FloSoft $
//
// Copyright (c) 2005 - 2011 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.
#ifndef GETTEXT_H_INCLUDED
#define GETTEXT_H_INCLUDED

#include <iconv.h>

#pragma once

class GetText
{
    public:
        GetText();
        ~GetText();

        const char* init(const char* catalog, const char* directory);
        const char* get(const char* text);

        const char* setCatalog(const char* catalog);
        const char* setLocale(const char* locale);
        const char* setCodepage(const char* codepage);

        void loadCatalog();

    private:
        std::string catalog;
        std::string directory;
        std::string locale;
        std::string codepage;
        std::map<std::string, std::string> stack;
        std::string lastcatalog;
        iconv_t iconv_cd;
};

#endif // !GETTEXT_H_INCLUDED

