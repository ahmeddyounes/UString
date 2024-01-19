/*
 * Copyright (c) 2024, Ahmed D. Younes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the “Software”), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 * TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * Note: All uchar_is_*_category(UChar) functions are auto generated from UnicodeData.txt file.
 * */

#include "unichar.h"

bool uchar_is_Cc_category(UChar ch)
{
    if(ch >= 0x0000 && ch <= 0x001F){
        return true;
    }
    if(ch >= 0x007F && ch <= 0x009F){
        return true;
    }
    return false;
}

bool uchar_is_Zs_category(UChar ch)
{
    if(ch >= 0x2000 && ch <= 0x200A){
        return true;
    }
    switch(ch){
        case 0x0020:
        case 0x00A0:
        case 0x1680:
        case 0x202F:
        case 0x205F:
        case 0x3000:
            return true;
    }
    return false;
}

bool uchar_is_Po_category(UChar ch)
{
    if(ch >= 0x0021 && ch <= 0x0023){
        return true;
    }
    if(ch >= 0x0025 && ch <= 0x0027){
        return true;
    }
    if(ch >= 0x002E && ch <= 0x002F){
        return true;
    }
    if(ch >= 0x003A && ch <= 0x003B){
        return true;
    }
    if(ch >= 0x003F && ch <= 0x0040){
        return true;
    }
    if(ch >= 0x00B6 && ch <= 0x00B7){
        return true;
    }
    if(ch >= 0x055A && ch <= 0x055F){
        return true;
    }
    if(ch >= 0x05F3 && ch <= 0x05F4){
        return true;
    }
    if(ch >= 0x0609 && ch <= 0x060A){
        return true;
    }
    if(ch >= 0x060C && ch <= 0x060D){
        return true;
    }
    if(ch >= 0x061D && ch <= 0x061F){
        return true;
    }
    if(ch >= 0x066A && ch <= 0x066D){
        return true;
    }
    if(ch >= 0x0700 && ch <= 0x070D){
        return true;
    }
    if(ch >= 0x07F7 && ch <= 0x07F9){
        return true;
    }
    if(ch >= 0x0830 && ch <= 0x083E){
        return true;
    }
    if(ch >= 0x0964 && ch <= 0x0965){
        return true;
    }
    if(ch >= 0x0E5A && ch <= 0x0E5B){
        return true;
    }
    if(ch >= 0x0F04 && ch <= 0x0F12){
        return true;
    }
    if(ch >= 0x0FD0 && ch <= 0x0FD4){
        return true;
    }
    if(ch >= 0x0FD9 && ch <= 0x0FDA){
        return true;
    }
    if(ch >= 0x104A && ch <= 0x104F){
        return true;
    }
    if(ch >= 0x1360 && ch <= 0x1368){
        return true;
    }
    if(ch >= 0x16EB && ch <= 0x16ED){
        return true;
    }
    if(ch >= 0x1735 && ch <= 0x1736){
        return true;
    }
    if(ch >= 0x17D4 && ch <= 0x17D6){
        return true;
    }
    if(ch >= 0x17D8 && ch <= 0x17DA){
        return true;
    }
    if(ch >= 0x1800 && ch <= 0x1805){
        return true;
    }
    if(ch >= 0x1807 && ch <= 0x180A){
        return true;
    }
    if(ch >= 0x1944 && ch <= 0x1945){
        return true;
    }
    if(ch >= 0x1A1E && ch <= 0x1A1F){
        return true;
    }
    if(ch >= 0x1AA0 && ch <= 0x1AA6){
        return true;
    }
    if(ch >= 0x1AA8 && ch <= 0x1AAD){
        return true;
    }
    if(ch >= 0x1B5A && ch <= 0x1B60){
        return true;
    }
    if(ch >= 0x1B7D && ch <= 0x1B7E){
        return true;
    }
    if(ch >= 0x1BFC && ch <= 0x1BFF){
        return true;
    }
    if(ch >= 0x1C3B && ch <= 0x1C3F){
        return true;
    }
    if(ch >= 0x1C7E && ch <= 0x1C7F){
        return true;
    }
    if(ch >= 0x1CC0 && ch <= 0x1CC7){
        return true;
    }
    if(ch >= 0x2016 && ch <= 0x2017){
        return true;
    }
    if(ch >= 0x2020 && ch <= 0x2027){
        return true;
    }
    if(ch >= 0x2030 && ch <= 0x2038){
        return true;
    }
    if(ch >= 0x203B && ch <= 0x203E){
        return true;
    }
    if(ch >= 0x2041 && ch <= 0x2043){
        return true;
    }
    if(ch >= 0x2047 && ch <= 0x2051){
        return true;
    }
    if(ch >= 0x2055 && ch <= 0x205E){
        return true;
    }
    if(ch >= 0x2CF9 && ch <= 0x2CFC){
        return true;
    }
    if(ch >= 0x2CFE && ch <= 0x2CFF){
        return true;
    }
    if(ch >= 0x2E00 && ch <= 0x2E01){
        return true;
    }
    if(ch >= 0x2E06 && ch <= 0x2E08){
        return true;
    }
    if(ch >= 0x2E0E && ch <= 0x2E16){
        return true;
    }
    if(ch >= 0x2E18 && ch <= 0x2E19){
        return true;
    }
    if(ch >= 0x2E1E && ch <= 0x2E1F){
        return true;
    }
    if(ch >= 0x2E2A && ch <= 0x2E2E){
        return true;
    }
    if(ch >= 0x2E30 && ch <= 0x2E39){
        return true;
    }
    if(ch >= 0x2E3C && ch <= 0x2E3F){
        return true;
    }
    if(ch >= 0x2E43 && ch <= 0x2E4F){
        return true;
    }
    if(ch >= 0x2E52 && ch <= 0x2E54){
        return true;
    }
    if(ch >= 0x3001 && ch <= 0x3003){
        return true;
    }
    if(ch >= 0xA4FE && ch <= 0xA4FF){
        return true;
    }
    if(ch >= 0xA60D && ch <= 0xA60F){
        return true;
    }
    if(ch >= 0xA6F2 && ch <= 0xA6F7){
        return true;
    }
    if(ch >= 0xA874 && ch <= 0xA877){
        return true;
    }
    if(ch >= 0xA8CE && ch <= 0xA8CF){
        return true;
    }
    if(ch >= 0xA8F8 && ch <= 0xA8FA){
        return true;
    }
    if(ch >= 0xA92E && ch <= 0xA92F){
        return true;
    }
    if(ch >= 0xA9C1 && ch <= 0xA9CD){
        return true;
    }
    if(ch >= 0xA9DE && ch <= 0xA9DF){
        return true;
    }
    if(ch >= 0xAA5C && ch <= 0xAA5F){
        return true;
    }
    if(ch >= 0xAADE && ch <= 0xAADF){
        return true;
    }
    if(ch >= 0xAAF0 && ch <= 0xAAF1){
        return true;
    }
    if(ch >= 0xFE10 && ch <= 0xFE16){
        return true;
    }
    if(ch >= 0xFE45 && ch <= 0xFE46){
        return true;
    }
    if(ch >= 0xFE49 && ch <= 0xFE4C){
        return true;
    }
    if(ch >= 0xFE50 && ch <= 0xFE57){
        return true;
    }
    if(ch >= 0xFE5F && ch <= 0xFE61){
        return true;
    }
    if(ch >= 0xFE6A && ch <= 0xFE6B){
        return true;
    }
    if(ch >= 0xFF01 && ch <= 0xFF03){
        return true;
    }
    if(ch >= 0xFF05 && ch <= 0xFF07){
        return true;
    }
    if(ch >= 0xFF0E && ch <= 0xFF0F){
        return true;
    }
    if(ch >= 0xFF1A && ch <= 0xFF1B){
        return true;
    }
    if(ch >= 0xFF1F && ch <= 0xFF20){
        return true;
    }
    if(ch >= 0xFF64 && ch <= 0xFF65){
        return true;
    }
    if(ch >= 0x10100 && ch <= 0x10102){
        return true;
    }
    if(ch >= 0x10A50 && ch <= 0x10A58){
        return true;
    }
    if(ch >= 0x10AF0 && ch <= 0x10AF6){
        return true;
    }
    if(ch >= 0x10B39 && ch <= 0x10B3F){
        return true;
    }
    if(ch >= 0x10B99 && ch <= 0x10B9C){
        return true;
    }
    if(ch >= 0x10F55 && ch <= 0x10F59){
        return true;
    }
    if(ch >= 0x10F86 && ch <= 0x10F89){
        return true;
    }
    if(ch >= 0x11047 && ch <= 0x1104D){
        return true;
    }
    if(ch >= 0x110BB && ch <= 0x110BC){
        return true;
    }
    if(ch >= 0x110BE && ch <= 0x110C1){
        return true;
    }
    if(ch >= 0x11140 && ch <= 0x11143){
        return true;
    }
    if(ch >= 0x11174 && ch <= 0x11175){
        return true;
    }
    if(ch >= 0x111C5 && ch <= 0x111C8){
        return true;
    }
    if(ch >= 0x111DD && ch <= 0x111DF){
        return true;
    }
    if(ch >= 0x11238 && ch <= 0x1123D){
        return true;
    }
    if(ch >= 0x1144B && ch <= 0x1144F){
        return true;
    }
    if(ch >= 0x1145A && ch <= 0x1145D){
        return true;
    }
    if(ch >= 0x115C1 && ch <= 0x115D7){
        return true;
    }
    if(ch >= 0x11641 && ch <= 0x11643){
        return true;
    }
    if(ch >= 0x11660 && ch <= 0x1166C){
        return true;
    }
    if(ch >= 0x1173C && ch <= 0x1173E){
        return true;
    }
    if(ch >= 0x11944 && ch <= 0x11946){
        return true;
    }
    if(ch >= 0x11A3F && ch <= 0x11A46){
        return true;
    }
    if(ch >= 0x11A9A && ch <= 0x11A9C){
        return true;
    }
    if(ch >= 0x11A9E && ch <= 0x11AA2){
        return true;
    }
    if(ch >= 0x11B00 && ch <= 0x11B09){
        return true;
    }
    if(ch >= 0x11C41 && ch <= 0x11C45){
        return true;
    }
    if(ch >= 0x11C70 && ch <= 0x11C71){
        return true;
    }
    if(ch >= 0x11EF7 && ch <= 0x11EF8){
        return true;
    }
    if(ch >= 0x11F43 && ch <= 0x11F4F){
        return true;
    }
    if(ch >= 0x12470 && ch <= 0x12474){
        return true;
    }
    if(ch >= 0x12FF1 && ch <= 0x12FF2){
        return true;
    }
    if(ch >= 0x16A6E && ch <= 0x16A6F){
        return true;
    }
    if(ch >= 0x16B37 && ch <= 0x16B3B){
        return true;
    }
    if(ch >= 0x16E97 && ch <= 0x16E9A){
        return true;
    }
    if(ch >= 0x1DA87 && ch <= 0x1DA8B){
        return true;
    }
    if(ch >= 0x1E95E && ch <= 0x1E95F){
        return true;
    }
    switch(ch){
        case 0x002A:
        case 0x002C:
        case 0x005C:
        case 0x00A1:
        case 0x00A7:
        case 0x00BF:
        case 0x037E:
        case 0x0387:
        case 0x0589:
        case 0x05C0:
        case 0x05C3:
        case 0x05C6:
        case 0x061B:
        case 0x06D4:
        case 0x085E:
        case 0x0970:
        case 0x09FD:
        case 0x0A76:
        case 0x0AF0:
        case 0x0C77:
        case 0x0C84:
        case 0x0DF4:
        case 0x0E4F:
        case 0x0F14:
        case 0x0F85:
        case 0x10FB:
        case 0x166E:
        case 0x1CD3:
        case 0x2053:
        case 0x2D70:
        case 0x2E0B:
        case 0x2E1B:
        case 0x2E41:
        case 0x303D:
        case 0x30FB:
        case 0xA673:
        case 0xA67E:
        case 0xA8FC:
        case 0xA95F:
        case 0xABEB:
        case 0xFE19:
        case 0xFE30:
        case 0xFE68:
        case 0xFF0A:
        case 0xFF0C:
        case 0xFF3C:
        case 0xFF61:
        case 0x1039F:
        case 0x103D0:
        case 0x1056F:
        case 0x10857:
        case 0x1091F:
        case 0x1093F:
        case 0x10A7F:
        case 0x111CD:
        case 0x111DB:
        case 0x112A9:
        case 0x114C6:
        case 0x116B9:
        case 0x1183B:
        case 0x119E2:
        case 0x11FFF:
        case 0x16AF5:
        case 0x16B44:
        case 0x16FE2:
        case 0x1BC9F:
            return true;
    }
    return false;
}

bool uchar_is_Sc_category(UChar ch)
{
    if(ch >= 0x00A2 && ch <= 0x00A5){
        return true;
    }
    if(ch >= 0x07FE && ch <= 0x07FF){
        return true;
    }
    if(ch >= 0x09F2 && ch <= 0x09F3){
        return true;
    }
    if(ch >= 0x20A0 && ch <= 0x20C0){
        return true;
    }
    if(ch >= 0xFFE0 && ch <= 0xFFE1){
        return true;
    }
    if(ch >= 0xFFE5 && ch <= 0xFFE6){
        return true;
    }
    if(ch >= 0x11FDD && ch <= 0x11FE0){
        return true;
    }
    switch(ch){
        case 0x0024:
        case 0x058F:
        case 0x060B:
        case 0x09FB:
        case 0x0AF1:
        case 0x0BF9:
        case 0x0E3F:
        case 0x17DB:
        case 0xA838:
        case 0xFDFC:
        case 0xFE69:
        case 0xFF04:
        case 0x1E2FF:
        case 0x1ECB0:
            return true;
    }
    return false;
}

bool uchar_is_Ps_category(UChar ch)
{
    switch(ch){
        case 0x0028:
        case 0x005B:
        case 0x007B:
        case 0x0F3A:
        case 0x0F3C:
        case 0x169B:
        case 0x201A:
        case 0x201E:
        case 0x2045:
        case 0x207D:
        case 0x208D:
        case 0x2308:
        case 0x230A:
        case 0x2329:
        case 0x2768:
        case 0x276A:
        case 0x276C:
        case 0x276E:
        case 0x2770:
        case 0x2772:
        case 0x2774:
        case 0x27C5:
        case 0x27E6:
        case 0x27E8:
        case 0x27EA:
        case 0x27EC:
        case 0x27EE:
        case 0x2983:
        case 0x2985:
        case 0x2987:
        case 0x2989:
        case 0x298B:
        case 0x298D:
        case 0x298F:
        case 0x2991:
        case 0x2993:
        case 0x2995:
        case 0x2997:
        case 0x29D8:
        case 0x29DA:
        case 0x29FC:
        case 0x2E22:
        case 0x2E24:
        case 0x2E26:
        case 0x2E28:
        case 0x2E42:
        case 0x2E55:
        case 0x2E57:
        case 0x2E59:
        case 0x2E5B:
        case 0x3008:
        case 0x300A:
        case 0x300C:
        case 0x300E:
        case 0x3010:
        case 0x3014:
        case 0x3016:
        case 0x3018:
        case 0x301A:
        case 0x301D:
        case 0xFD3F:
        case 0xFE17:
        case 0xFE35:
        case 0xFE37:
        case 0xFE39:
        case 0xFE3B:
        case 0xFE3D:
        case 0xFE3F:
        case 0xFE41:
        case 0xFE43:
        case 0xFE47:
        case 0xFE59:
        case 0xFE5B:
        case 0xFE5D:
        case 0xFF08:
        case 0xFF3B:
        case 0xFF5B:
        case 0xFF5F:
        case 0xFF62:
            return true;
    }
    return false;
}

bool uchar_is_Pe_category(UChar ch)
{
    if(ch >= 0x301E && ch <= 0x301F){
        return true;
    }
    switch(ch){
        case 0x0029:
        case 0x005D:
        case 0x007D:
        case 0x0F3B:
        case 0x0F3D:
        case 0x169C:
        case 0x2046:
        case 0x207E:
        case 0x208E:
        case 0x2309:
        case 0x230B:
        case 0x232A:
        case 0x2769:
        case 0x276B:
        case 0x276D:
        case 0x276F:
        case 0x2771:
        case 0x2773:
        case 0x2775:
        case 0x27C6:
        case 0x27E7:
        case 0x27E9:
        case 0x27EB:
        case 0x27ED:
        case 0x27EF:
        case 0x2984:
        case 0x2986:
        case 0x2988:
        case 0x298A:
        case 0x298C:
        case 0x298E:
        case 0x2990:
        case 0x2992:
        case 0x2994:
        case 0x2996:
        case 0x2998:
        case 0x29D9:
        case 0x29DB:
        case 0x29FD:
        case 0x2E23:
        case 0x2E25:
        case 0x2E27:
        case 0x2E29:
        case 0x2E56:
        case 0x2E58:
        case 0x2E5A:
        case 0x2E5C:
        case 0x3009:
        case 0x300B:
        case 0x300D:
        case 0x300F:
        case 0x3011:
        case 0x3015:
        case 0x3017:
        case 0x3019:
        case 0x301B:
        case 0xFD3E:
        case 0xFE18:
        case 0xFE36:
        case 0xFE38:
        case 0xFE3A:
        case 0xFE3C:
        case 0xFE3E:
        case 0xFE40:
        case 0xFE42:
        case 0xFE44:
        case 0xFE48:
        case 0xFE5A:
        case 0xFE5C:
        case 0xFE5E:
        case 0xFF09:
        case 0xFF3D:
        case 0xFF5D:
        case 0xFF60:
        case 0xFF63:
            return true;
    }
    return false;
}

bool uchar_is_Sm_category(UChar ch)
{
    if(ch >= 0x003C && ch <= 0x003E){
        return true;
    }
    if(ch >= 0x0606 && ch <= 0x0608){
        return true;
    }
    if(ch >= 0x207A && ch <= 0x207C){
        return true;
    }
    if(ch >= 0x208A && ch <= 0x208C){
        return true;
    }
    if(ch >= 0x2140 && ch <= 0x2144){
        return true;
    }
    if(ch >= 0x2190 && ch <= 0x2194){
        return true;
    }
    if(ch >= 0x219A && ch <= 0x219B){
        return true;
    }
    if(ch >= 0x21CE && ch <= 0x21CF){
        return true;
    }
    if(ch >= 0x21F4 && ch <= 0x22FF){
        return true;
    }
    if(ch >= 0x2320 && ch <= 0x2321){
        return true;
    }
    if(ch >= 0x239B && ch <= 0x23B3){
        return true;
    }
    if(ch >= 0x23DC && ch <= 0x23E1){
        return true;
    }
    if(ch >= 0x25F8 && ch <= 0x25FF){
        return true;
    }
    if(ch >= 0x27C0 && ch <= 0x27C4){
        return true;
    }
    if(ch >= 0x27C7 && ch <= 0x27E5){
        return true;
    }
    if(ch >= 0x27F0 && ch <= 0x27FF){
        return true;
    }
    if(ch >= 0x2900 && ch <= 0x2982){
        return true;
    }
    if(ch >= 0x2999 && ch <= 0x29D7){
        return true;
    }
    if(ch >= 0x29DC && ch <= 0x29FB){
        return true;
    }
    if(ch >= 0x29FE && ch <= 0x2AFF){
        return true;
    }
    if(ch >= 0x2B30 && ch <= 0x2B44){
        return true;
    }
    if(ch >= 0x2B47 && ch <= 0x2B4C){
        return true;
    }
    if(ch >= 0xFE64 && ch <= 0xFE66){
        return true;
    }
    if(ch >= 0xFF1C && ch <= 0xFF1E){
        return true;
    }
    if(ch >= 0xFFE9 && ch <= 0xFFEC){
        return true;
    }
    if(ch >= 0x1EEF0 && ch <= 0x1EEF1){
        return true;
    }
    switch(ch){
        case 0x002B:
        case 0x007C:
        case 0x007E:
        case 0x00AC:
        case 0x00B1:
        case 0x00D7:
        case 0x00F7:
        case 0x03F6:
        case 0x2044:
        case 0x2052:
        case 0x2118:
        case 0x214B:
        case 0x21A0:
        case 0x21A3:
        case 0x21A6:
        case 0x21AE:
        case 0x21D2:
        case 0x21D4:
        case 0x237C:
        case 0x25B7:
        case 0x25C1:
        case 0x266F:
        case 0xFB29:
        case 0xFE62:
        case 0xFF0B:
        case 0xFF5C:
        case 0xFF5E:
        case 0xFFE2:
        case 0x1D6C1:
        case 0x1D6DB:
        case 0x1D6FB:
        case 0x1D715:
        case 0x1D735:
        case 0x1D74F:
        case 0x1D76F:
        case 0x1D789:
        case 0x1D7A9:
        case 0x1D7C3:
            return true;
    }
    return false;
}

bool uchar_is_Pd_category(UChar ch)
{
    if(ch >= 0x2010 && ch <= 0x2015){
        return true;
    }
    if(ch >= 0x2E3A && ch <= 0x2E3B){
        return true;
    }
    if(ch >= 0xFE31 && ch <= 0xFE32){
        return true;
    }
    switch(ch){
        case 0x002D:
        case 0x058A:
        case 0x05BE:
        case 0x1400:
        case 0x1806:
        case 0x2E17:
        case 0x2E1A:
        case 0x2E40:
        case 0x2E5D:
        case 0x301C:
        case 0x3030:
        case 0x30A0:
        case 0xFE58:
        case 0xFE63:
        case 0xFF0D:
        case 0x10EAD:
            return true;
    }
    return false;
}

bool uchar_is_Nd_category(UChar ch)
{
    if(ch >= 0x0030 && ch <= 0x0039){
        return true;
    }
    if(ch >= 0x0660 && ch <= 0x0669){
        return true;
    }
    if(ch >= 0x06F0 && ch <= 0x06F9){
        return true;
    }
    if(ch >= 0x07C0 && ch <= 0x07C9){
        return true;
    }
    if(ch >= 0x0966 && ch <= 0x096F){
        return true;
    }
    if(ch >= 0x09E6 && ch <= 0x09EF){
        return true;
    }
    if(ch >= 0x0A66 && ch <= 0x0A6F){
        return true;
    }
    if(ch >= 0x0AE6 && ch <= 0x0AEF){
        return true;
    }
    if(ch >= 0x0B66 && ch <= 0x0B6F){
        return true;
    }
    if(ch >= 0x0BE6 && ch <= 0x0BEF){
        return true;
    }
    if(ch >= 0x0C66 && ch <= 0x0C6F){
        return true;
    }
    if(ch >= 0x0CE6 && ch <= 0x0CEF){
        return true;
    }
    if(ch >= 0x0D66 && ch <= 0x0D6F){
        return true;
    }
    if(ch >= 0x0DE6 && ch <= 0x0DEF){
        return true;
    }
    if(ch >= 0x0E50 && ch <= 0x0E59){
        return true;
    }
    if(ch >= 0x0ED0 && ch <= 0x0ED9){
        return true;
    }
    if(ch >= 0x0F20 && ch <= 0x0F29){
        return true;
    }
    if(ch >= 0x1040 && ch <= 0x1049){
        return true;
    }
    if(ch >= 0x1090 && ch <= 0x1099){
        return true;
    }
    if(ch >= 0x17E0 && ch <= 0x17E9){
        return true;
    }
    if(ch >= 0x1810 && ch <= 0x1819){
        return true;
    }
    if(ch >= 0x1946 && ch <= 0x194F){
        return true;
    }
    if(ch >= 0x19D0 && ch <= 0x19D9){
        return true;
    }
    if(ch >= 0x1A80 && ch <= 0x1A99){
        return true;
    }
    if(ch >= 0x1B50 && ch <= 0x1B59){
        return true;
    }
    if(ch >= 0x1BB0 && ch <= 0x1BB9){
        return true;
    }
    if(ch >= 0x1C40 && ch <= 0x1C49){
        return true;
    }
    if(ch >= 0x1C50 && ch <= 0x1C59){
        return true;
    }
    if(ch >= 0xA620 && ch <= 0xA629){
        return true;
    }
    if(ch >= 0xA8D0 && ch <= 0xA8D9){
        return true;
    }
    if(ch >= 0xA900 && ch <= 0xA909){
        return true;
    }
    if(ch >= 0xA9D0 && ch <= 0xA9D9){
        return true;
    }
    if(ch >= 0xA9F0 && ch <= 0xA9F9){
        return true;
    }
    if(ch >= 0xAA50 && ch <= 0xAA59){
        return true;
    }
    if(ch >= 0xABF0 && ch <= 0xABF9){
        return true;
    }
    if(ch >= 0xFF10 && ch <= 0xFF19){
        return true;
    }
    if(ch >= 0x104A0 && ch <= 0x104A9){
        return true;
    }
    if(ch >= 0x10D30 && ch <= 0x10D39){
        return true;
    }
    if(ch >= 0x11066 && ch <= 0x1106F){
        return true;
    }
    if(ch >= 0x110F0 && ch <= 0x110F9){
        return true;
    }
    if(ch >= 0x11136 && ch <= 0x1113F){
        return true;
    }
    if(ch >= 0x111D0 && ch <= 0x111D9){
        return true;
    }
    if(ch >= 0x112F0 && ch <= 0x112F9){
        return true;
    }
    if(ch >= 0x11450 && ch <= 0x11459){
        return true;
    }
    if(ch >= 0x114D0 && ch <= 0x114D9){
        return true;
    }
    if(ch >= 0x11650 && ch <= 0x11659){
        return true;
    }
    if(ch >= 0x116C0 && ch <= 0x116C9){
        return true;
    }
    if(ch >= 0x11730 && ch <= 0x11739){
        return true;
    }
    if(ch >= 0x118E0 && ch <= 0x118E9){
        return true;
    }
    if(ch >= 0x11950 && ch <= 0x11959){
        return true;
    }
    if(ch >= 0x11C50 && ch <= 0x11C59){
        return true;
    }
    if(ch >= 0x11D50 && ch <= 0x11D59){
        return true;
    }
    if(ch >= 0x11DA0 && ch <= 0x11DA9){
        return true;
    }
    if(ch >= 0x11F50 && ch <= 0x11F59){
        return true;
    }
    if(ch >= 0x16A60 && ch <= 0x16A69){
        return true;
    }
    if(ch >= 0x16AC0 && ch <= 0x16AC9){
        return true;
    }
    if(ch >= 0x16B50 && ch <= 0x16B59){
        return true;
    }
    if(ch >= 0x1D7CE && ch <= 0x1D7FF){
        return true;
    }
    if(ch >= 0x1E140 && ch <= 0x1E149){
        return true;
    }
    if(ch >= 0x1E2F0 && ch <= 0x1E2F9){
        return true;
    }
    if(ch >= 0x1E4F0 && ch <= 0x1E4F9){
        return true;
    }
    if(ch >= 0x1E950 && ch <= 0x1E959){
        return true;
    }
    if(ch >= 0x1FBF0 && ch <= 0x1FBF9){
        return true;
    }
    return false;
}

bool uchar_is_Lu_category(UChar ch)
{
    if(ch >= 0x0041 && ch <= 0x005A){
        return true;
    }
    if(ch >= 0x00C0 && ch <= 0x00D6){
        return true;
    }
    if(ch >= 0x00D8 && ch <= 0x00DE){
        return true;
    }
    if(ch >= 0x0178 && ch <= 0x0179){
        return true;
    }
    if(ch >= 0x0181 && ch <= 0x0182){
        return true;
    }
    if(ch >= 0x0186 && ch <= 0x0187){
        return true;
    }
    if(ch >= 0x0189 && ch <= 0x018B){
        return true;
    }
    if(ch >= 0x018E && ch <= 0x0191){
        return true;
    }
    if(ch >= 0x0193 && ch <= 0x0194){
        return true;
    }
    if(ch >= 0x0196 && ch <= 0x0198){
        return true;
    }
    if(ch >= 0x019C && ch <= 0x019D){
        return true;
    }
    if(ch >= 0x019F && ch <= 0x01A0){
        return true;
    }
    if(ch >= 0x01A6 && ch <= 0x01A7){
        return true;
    }
    if(ch >= 0x01AE && ch <= 0x01AF){
        return true;
    }
    if(ch >= 0x01B1 && ch <= 0x01B3){
        return true;
    }
    if(ch >= 0x01B7 && ch <= 0x01B8){
        return true;
    }
    if(ch >= 0x01F6 && ch <= 0x01F8){
        return true;
    }
    if(ch >= 0x023A && ch <= 0x023B){
        return true;
    }
    if(ch >= 0x023D && ch <= 0x023E){
        return true;
    }
    if(ch >= 0x0243 && ch <= 0x0246){
        return true;
    }
    if(ch >= 0x0388 && ch <= 0x038F){
        return true;
    }
    if(ch >= 0x0391 && ch <= 0x03AB){
        return true;
    }
    if(ch >= 0x03D2 && ch <= 0x03D4){
        return true;
    }
    if(ch >= 0x03F9 && ch <= 0x03FA){
        return true;
    }
    if(ch >= 0x03FD && ch <= 0x042F){
        return true;
    }
    if(ch >= 0x04C0 && ch <= 0x04C1){
        return true;
    }
    if(ch >= 0x0531 && ch <= 0x0556){
        return true;
    }
    if(ch >= 0x10A0 && ch <= 0x10CD){
        return true;
    }
    if(ch >= 0x13A0 && ch <= 0x13F5){
        return true;
    }
    if(ch >= 0x1C90 && ch <= 0x1CBF){
        return true;
    }
    if(ch >= 0x1F08 && ch <= 0x1F0F){
        return true;
    }
    if(ch >= 0x1F18 && ch <= 0x1F1D){
        return true;
    }
    if(ch >= 0x1F28 && ch <= 0x1F2F){
        return true;
    }
    if(ch >= 0x1F38 && ch <= 0x1F3F){
        return true;
    }
    if(ch >= 0x1F48 && ch <= 0x1F4D){
        return true;
    }
    if(ch >= 0x1F59 && ch <= 0x1F5F){
        return true;
    }
    if(ch >= 0x1F68 && ch <= 0x1F6F){
        return true;
    }
    if(ch >= 0x1FB8 && ch <= 0x1FBB){
        return true;
    }
    if(ch >= 0x1FC8 && ch <= 0x1FCB){
        return true;
    }
    if(ch >= 0x1FD8 && ch <= 0x1FDB){
        return true;
    }
    if(ch >= 0x1FE8 && ch <= 0x1FEC){
        return true;
    }
    if(ch >= 0x1FF8 && ch <= 0x1FFB){
        return true;
    }
    if(ch >= 0x210B && ch <= 0x210D){
        return true;
    }
    if(ch >= 0x2110 && ch <= 0x2112){
        return true;
    }
    if(ch >= 0x2119 && ch <= 0x211D){
        return true;
    }
    if(ch >= 0x212A && ch <= 0x212D){
        return true;
    }
    if(ch >= 0x2130 && ch <= 0x2133){
        return true;
    }
    if(ch >= 0x213E && ch <= 0x213F){
        return true;
    }
    if(ch >= 0x2C00 && ch <= 0x2C2F){
        return true;
    }
    if(ch >= 0x2C62 && ch <= 0x2C64){
        return true;
    }
    if(ch >= 0x2C6D && ch <= 0x2C70){
        return true;
    }
    if(ch >= 0x2C7E && ch <= 0x2C80){
        return true;
    }
    if(ch >= 0xA77D && ch <= 0xA77E){
        return true;
    }
    if(ch >= 0xA7AA && ch <= 0xA7AE){
        return true;
    }
    if(ch >= 0xA7B0 && ch <= 0xA7B4){
        return true;
    }
    if(ch >= 0xA7C4 && ch <= 0xA7C7){
        return true;
    }
    if(ch >= 0xFF21 && ch <= 0xFF3A){
        return true;
    }
    if(ch >= 0x10400 && ch <= 0x10427){
        return true;
    }
    if(ch >= 0x104B0 && ch <= 0x104D3){
        return true;
    }
    if(ch >= 0x10570 && ch <= 0x10595){
        return true;
    }
    if(ch >= 0x10C80 && ch <= 0x10CB2){
        return true;
    }
    if(ch >= 0x118A0 && ch <= 0x118BF){
        return true;
    }
    if(ch >= 0x16E40 && ch <= 0x16E5F){
        return true;
    }
    if(ch >= 0x1D400 && ch <= 0x1D419){
        return true;
    }
    if(ch >= 0x1D434 && ch <= 0x1D44D){
        return true;
    }
    if(ch >= 0x1D468 && ch <= 0x1D481){
        return true;
    }
    if(ch >= 0x1D49C && ch <= 0x1D4B5){
        return true;
    }
    if(ch >= 0x1D4D0 && ch <= 0x1D4E9){
        return true;
    }
    if(ch >= 0x1D504 && ch <= 0x1D51C){
        return true;
    }
    if(ch >= 0x1D538 && ch <= 0x1D550){
        return true;
    }
    if(ch >= 0x1D56C && ch <= 0x1D585){
        return true;
    }
    if(ch >= 0x1D5A0 && ch <= 0x1D5B9){
        return true;
    }
    if(ch >= 0x1D5D4 && ch <= 0x1D5ED){
        return true;
    }
    if(ch >= 0x1D608 && ch <= 0x1D621){
        return true;
    }
    if(ch >= 0x1D63C && ch <= 0x1D655){
        return true;
    }
    if(ch >= 0x1D670 && ch <= 0x1D689){
        return true;
    }
    if(ch >= 0x1D6A8 && ch <= 0x1D6C0){
        return true;
    }
    if(ch >= 0x1D6E2 && ch <= 0x1D6FA){
        return true;
    }
    if(ch >= 0x1D71C && ch <= 0x1D734){
        return true;
    }
    if(ch >= 0x1D756 && ch <= 0x1D76E){
        return true;
    }
    if(ch >= 0x1D790 && ch <= 0x1D7A8){
        return true;
    }
    if(ch >= 0x1E900 && ch <= 0x1E921){
        return true;
    }
    switch(ch){
        case 0x0100:
        case 0x0102:
        case 0x0104:
        case 0x0106:
        case 0x0108:
        case 0x010A:
        case 0x010C:
        case 0x010E:
        case 0x0110:
        case 0x0112:
        case 0x0114:
        case 0x0116:
        case 0x0118:
        case 0x011A:
        case 0x011C:
        case 0x011E:
        case 0x0120:
        case 0x0122:
        case 0x0124:
        case 0x0126:
        case 0x0128:
        case 0x012A:
        case 0x012C:
        case 0x012E:
        case 0x0130:
        case 0x0132:
        case 0x0134:
        case 0x0136:
        case 0x0139:
        case 0x013B:
        case 0x013D:
        case 0x013F:
        case 0x0141:
        case 0x0143:
        case 0x0145:
        case 0x0147:
        case 0x014A:
        case 0x014C:
        case 0x014E:
        case 0x0150:
        case 0x0152:
        case 0x0154:
        case 0x0156:
        case 0x0158:
        case 0x015A:
        case 0x015C:
        case 0x015E:
        case 0x0160:
        case 0x0162:
        case 0x0164:
        case 0x0166:
        case 0x0168:
        case 0x016A:
        case 0x016C:
        case 0x016E:
        case 0x0170:
        case 0x0172:
        case 0x0174:
        case 0x0176:
        case 0x017B:
        case 0x017D:
        case 0x0184:
        case 0x01A2:
        case 0x01A4:
        case 0x01A9:
        case 0x01AC:
        case 0x01B5:
        case 0x01BC:
        case 0x01C4:
        case 0x01C7:
        case 0x01CA:
        case 0x01CD:
        case 0x01CF:
        case 0x01D1:
        case 0x01D3:
        case 0x01D5:
        case 0x01D7:
        case 0x01D9:
        case 0x01DB:
        case 0x01DE:
        case 0x01E0:
        case 0x01E2:
        case 0x01E4:
        case 0x01E6:
        case 0x01E8:
        case 0x01EA:
        case 0x01EC:
        case 0x01EE:
        case 0x01F1:
        case 0x01F4:
        case 0x01FA:
        case 0x01FC:
        case 0x01FE:
        case 0x0200:
        case 0x0202:
        case 0x0204:
        case 0x0206:
        case 0x0208:
        case 0x020A:
        case 0x020C:
        case 0x020E:
        case 0x0210:
        case 0x0212:
        case 0x0214:
        case 0x0216:
        case 0x0218:
        case 0x021A:
        case 0x021C:
        case 0x021E:
        case 0x0220:
        case 0x0222:
        case 0x0224:
        case 0x0226:
        case 0x0228:
        case 0x022A:
        case 0x022C:
        case 0x022E:
        case 0x0230:
        case 0x0232:
        case 0x0241:
        case 0x0248:
        case 0x024A:
        case 0x024C:
        case 0x024E:
        case 0x0370:
        case 0x0372:
        case 0x0376:
        case 0x037F:
        case 0x0386:
        case 0x03CF:
        case 0x03D8:
        case 0x03DA:
        case 0x03DC:
        case 0x03DE:
        case 0x03E0:
        case 0x03E2:
        case 0x03E4:
        case 0x03E6:
        case 0x03E8:
        case 0x03EA:
        case 0x03EC:
        case 0x03EE:
        case 0x03F4:
        case 0x03F7:
        case 0x0460:
        case 0x0462:
        case 0x0464:
        case 0x0466:
        case 0x0468:
        case 0x046A:
        case 0x046C:
        case 0x046E:
        case 0x0470:
        case 0x0472:
        case 0x0474:
        case 0x0476:
        case 0x0478:
        case 0x047A:
        case 0x047C:
        case 0x047E:
        case 0x0480:
        case 0x048A:
        case 0x048C:
        case 0x048E:
        case 0x0490:
        case 0x0492:
        case 0x0494:
        case 0x0496:
        case 0x0498:
        case 0x049A:
        case 0x049C:
        case 0x049E:
        case 0x04A0:
        case 0x04A2:
        case 0x04A4:
        case 0x04A6:
        case 0x04A8:
        case 0x04AA:
        case 0x04AC:
        case 0x04AE:
        case 0x04B0:
        case 0x04B2:
        case 0x04B4:
        case 0x04B6:
        case 0x04B8:
        case 0x04BA:
        case 0x04BC:
        case 0x04BE:
        case 0x04C3:
        case 0x04C5:
        case 0x04C7:
        case 0x04C9:
        case 0x04CB:
        case 0x04CD:
        case 0x04D0:
        case 0x04D2:
        case 0x04D4:
        case 0x04D6:
        case 0x04D8:
        case 0x04DA:
        case 0x04DC:
        case 0x04DE:
        case 0x04E0:
        case 0x04E2:
        case 0x04E4:
        case 0x04E6:
        case 0x04E8:
        case 0x04EA:
        case 0x04EC:
        case 0x04EE:
        case 0x04F0:
        case 0x04F2:
        case 0x04F4:
        case 0x04F6:
        case 0x04F8:
        case 0x04FA:
        case 0x04FC:
        case 0x04FE:
        case 0x0500:
        case 0x0502:
        case 0x0504:
        case 0x0506:
        case 0x0508:
        case 0x050A:
        case 0x050C:
        case 0x050E:
        case 0x0510:
        case 0x0512:
        case 0x0514:
        case 0x0516:
        case 0x0518:
        case 0x051A:
        case 0x051C:
        case 0x051E:
        case 0x0520:
        case 0x0522:
        case 0x0524:
        case 0x0526:
        case 0x0528:
        case 0x052A:
        case 0x052C:
        case 0x052E:
        case 0x1E00:
        case 0x1E02:
        case 0x1E04:
        case 0x1E06:
        case 0x1E08:
        case 0x1E0A:
        case 0x1E0C:
        case 0x1E0E:
        case 0x1E10:
        case 0x1E12:
        case 0x1E14:
        case 0x1E16:
        case 0x1E18:
        case 0x1E1A:
        case 0x1E1C:
        case 0x1E1E:
        case 0x1E20:
        case 0x1E22:
        case 0x1E24:
        case 0x1E26:
        case 0x1E28:
        case 0x1E2A:
        case 0x1E2C:
        case 0x1E2E:
        case 0x1E30:
        case 0x1E32:
        case 0x1E34:
        case 0x1E36:
        case 0x1E38:
        case 0x1E3A:
        case 0x1E3C:
        case 0x1E3E:
        case 0x1E40:
        case 0x1E42:
        case 0x1E44:
        case 0x1E46:
        case 0x1E48:
        case 0x1E4A:
        case 0x1E4C:
        case 0x1E4E:
        case 0x1E50:
        case 0x1E52:
        case 0x1E54:
        case 0x1E56:
        case 0x1E58:
        case 0x1E5A:
        case 0x1E5C:
        case 0x1E5E:
        case 0x1E60:
        case 0x1E62:
        case 0x1E64:
        case 0x1E66:
        case 0x1E68:
        case 0x1E6A:
        case 0x1E6C:
        case 0x1E6E:
        case 0x1E70:
        case 0x1E72:
        case 0x1E74:
        case 0x1E76:
        case 0x1E78:
        case 0x1E7A:
        case 0x1E7C:
        case 0x1E7E:
        case 0x1E80:
        case 0x1E82:
        case 0x1E84:
        case 0x1E86:
        case 0x1E88:
        case 0x1E8A:
        case 0x1E8C:
        case 0x1E8E:
        case 0x1E90:
        case 0x1E92:
        case 0x1E94:
        case 0x1E9E:
        case 0x1EA0:
        case 0x1EA2:
        case 0x1EA4:
        case 0x1EA6:
        case 0x1EA8:
        case 0x1EAA:
        case 0x1EAC:
        case 0x1EAE:
        case 0x1EB0:
        case 0x1EB2:
        case 0x1EB4:
        case 0x1EB6:
        case 0x1EB8:
        case 0x1EBA:
        case 0x1EBC:
        case 0x1EBE:
        case 0x1EC0:
        case 0x1EC2:
        case 0x1EC4:
        case 0x1EC6:
        case 0x1EC8:
        case 0x1ECA:
        case 0x1ECC:
        case 0x1ECE:
        case 0x1ED0:
        case 0x1ED2:
        case 0x1ED4:
        case 0x1ED6:
        case 0x1ED8:
        case 0x1EDA:
        case 0x1EDC:
        case 0x1EDE:
        case 0x1EE0:
        case 0x1EE2:
        case 0x1EE4:
        case 0x1EE6:
        case 0x1EE8:
        case 0x1EEA:
        case 0x1EEC:
        case 0x1EEE:
        case 0x1EF0:
        case 0x1EF2:
        case 0x1EF4:
        case 0x1EF6:
        case 0x1EF8:
        case 0x1EFA:
        case 0x1EFC:
        case 0x1EFE:
        case 0x2102:
        case 0x2107:
        case 0x2115:
        case 0x2124:
        case 0x2126:
        case 0x2128:
        case 0x2145:
        case 0x2183:
        case 0x2C60:
        case 0x2C67:
        case 0x2C69:
        case 0x2C6B:
        case 0x2C72:
        case 0x2C75:
        case 0x2C82:
        case 0x2C84:
        case 0x2C86:
        case 0x2C88:
        case 0x2C8A:
        case 0x2C8C:
        case 0x2C8E:
        case 0x2C90:
        case 0x2C92:
        case 0x2C94:
        case 0x2C96:
        case 0x2C98:
        case 0x2C9A:
        case 0x2C9C:
        case 0x2C9E:
        case 0x2CA0:
        case 0x2CA2:
        case 0x2CA4:
        case 0x2CA6:
        case 0x2CA8:
        case 0x2CAA:
        case 0x2CAC:
        case 0x2CAE:
        case 0x2CB0:
        case 0x2CB2:
        case 0x2CB4:
        case 0x2CB6:
        case 0x2CB8:
        case 0x2CBA:
        case 0x2CBC:
        case 0x2CBE:
        case 0x2CC0:
        case 0x2CC2:
        case 0x2CC4:
        case 0x2CC6:
        case 0x2CC8:
        case 0x2CCA:
        case 0x2CCC:
        case 0x2CCE:
        case 0x2CD0:
        case 0x2CD2:
        case 0x2CD4:
        case 0x2CD6:
        case 0x2CD8:
        case 0x2CDA:
        case 0x2CDC:
        case 0x2CDE:
        case 0x2CE0:
        case 0x2CE2:
        case 0x2CEB:
        case 0x2CED:
        case 0x2CF2:
        case 0xA640:
        case 0xA642:
        case 0xA644:
        case 0xA646:
        case 0xA648:
        case 0xA64A:
        case 0xA64C:
        case 0xA64E:
        case 0xA650:
        case 0xA652:
        case 0xA654:
        case 0xA656:
        case 0xA658:
        case 0xA65A:
        case 0xA65C:
        case 0xA65E:
        case 0xA660:
        case 0xA662:
        case 0xA664:
        case 0xA666:
        case 0xA668:
        case 0xA66A:
        case 0xA66C:
        case 0xA680:
        case 0xA682:
        case 0xA684:
        case 0xA686:
        case 0xA688:
        case 0xA68A:
        case 0xA68C:
        case 0xA68E:
        case 0xA690:
        case 0xA692:
        case 0xA694:
        case 0xA696:
        case 0xA698:
        case 0xA69A:
        case 0xA722:
        case 0xA724:
        case 0xA726:
        case 0xA728:
        case 0xA72A:
        case 0xA72C:
        case 0xA72E:
        case 0xA732:
        case 0xA734:
        case 0xA736:
        case 0xA738:
        case 0xA73A:
        case 0xA73C:
        case 0xA73E:
        case 0xA740:
        case 0xA742:
        case 0xA744:
        case 0xA746:
        case 0xA748:
        case 0xA74A:
        case 0xA74C:
        case 0xA74E:
        case 0xA750:
        case 0xA752:
        case 0xA754:
        case 0xA756:
        case 0xA758:
        case 0xA75A:
        case 0xA75C:
        case 0xA75E:
        case 0xA760:
        case 0xA762:
        case 0xA764:
        case 0xA766:
        case 0xA768:
        case 0xA76A:
        case 0xA76C:
        case 0xA76E:
        case 0xA779:
        case 0xA77B:
        case 0xA780:
        case 0xA782:
        case 0xA784:
        case 0xA786:
        case 0xA78B:
        case 0xA78D:
        case 0xA790:
        case 0xA792:
        case 0xA796:
        case 0xA798:
        case 0xA79A:
        case 0xA79C:
        case 0xA79E:
        case 0xA7A0:
        case 0xA7A2:
        case 0xA7A4:
        case 0xA7A6:
        case 0xA7A8:
        case 0xA7B6:
        case 0xA7B8:
        case 0xA7BA:
        case 0xA7BC:
        case 0xA7BE:
        case 0xA7C0:
        case 0xA7C2:
        case 0xA7C9:
        case 0xA7D0:
        case 0xA7D6:
        case 0xA7D8:
        case 0xA7F5:
        case 0x1D7CA:
            return true;
    }
    return false;
}

bool uchar_is_Sk_category(UChar ch)
{
    if(ch >= 0x02C2 && ch <= 0x02C5){
        return true;
    }
    if(ch >= 0x02D2 && ch <= 0x02DF){
        return true;
    }
    if(ch >= 0x02E5 && ch <= 0x02EB){
        return true;
    }
    if(ch >= 0x02EF && ch <= 0x02FF){
        return true;
    }
    if(ch >= 0x0384 && ch <= 0x0385){
        return true;
    }
    if(ch >= 0x1FBF && ch <= 0x1FC1){
        return true;
    }
    if(ch >= 0x1FCD && ch <= 0x1FCF){
        return true;
    }
    if(ch >= 0x1FDD && ch <= 0x1FDF){
        return true;
    }
    if(ch >= 0x1FED && ch <= 0x1FEF){
        return true;
    }
    if(ch >= 0x1FFD && ch <= 0x1FFE){
        return true;
    }
    if(ch >= 0x309B && ch <= 0x309C){
        return true;
    }
    if(ch >= 0xA700 && ch <= 0xA716){
        return true;
    }
    if(ch >= 0xA720 && ch <= 0xA721){
        return true;
    }
    if(ch >= 0xA789 && ch <= 0xA78A){
        return true;
    }
    if(ch >= 0xAB6A && ch <= 0xAB6B){
        return true;
    }
    if(ch >= 0xFBB2 && ch <= 0xFBC2){
        return true;
    }
    if(ch >= 0x1F3FB && ch <= 0x1F3FF){
        return true;
    }
    switch(ch){
        case 0x005E:
        case 0x0060:
        case 0x00A8:
        case 0x00AF:
        case 0x00B4:
        case 0x00B8:
        case 0x02ED:
        case 0x0375:
        case 0x0888:
        case 0x1FBD:
        case 0xAB5B:
        case 0xFF3E:
        case 0xFF40:
        case 0xFFE3:
            return true;
    }
    return false;
}

bool uchar_is_Pc_category(UChar ch)
{
    if(ch >= 0x203F && ch <= 0x2040){
        return true;
    }
    if(ch >= 0xFE33 && ch <= 0xFE34){
        return true;
    }
    if(ch >= 0xFE4D && ch <= 0xFE4F){
        return true;
    }
    switch(ch){
        case 0x005F:
        case 0x2054:
        case 0xFF3F:
            return true;
    }
    return false;
}

bool uchar_is_Ll_category(UChar ch)
{
    if(ch >= 0x0061 && ch <= 0x007A){
        return true;
    }
    if(ch >= 0x00DF && ch <= 0x00F6){
        return true;
    }
    if(ch >= 0x00F8 && ch <= 0x00FF){
        return true;
    }
    if(ch >= 0x0137 && ch <= 0x0138){
        return true;
    }
    if(ch >= 0x0148 && ch <= 0x0149){
        return true;
    }
    if(ch >= 0x017E && ch <= 0x0180){
        return true;
    }
    if(ch >= 0x018C && ch <= 0x018D){
        return true;
    }
    if(ch >= 0x0199 && ch <= 0x019B){
        return true;
    }
    if(ch >= 0x01AA && ch <= 0x01AB){
        return true;
    }
    if(ch >= 0x01B9 && ch <= 0x01BA){
        return true;
    }
    if(ch >= 0x01BD && ch <= 0x01BF){
        return true;
    }
    if(ch >= 0x01DC && ch <= 0x01DD){
        return true;
    }
    if(ch >= 0x01EF && ch <= 0x01F0){
        return true;
    }
    if(ch >= 0x0233 && ch <= 0x0239){
        return true;
    }
    if(ch >= 0x023F && ch <= 0x0240){
        return true;
    }
    if(ch >= 0x024F && ch <= 0x0293){
        return true;
    }
    if(ch >= 0x0295 && ch <= 0x02AF){
        return true;
    }
    if(ch >= 0x037B && ch <= 0x037D){
        return true;
    }
    if(ch >= 0x03AC && ch <= 0x03CE){
        return true;
    }
    if(ch >= 0x03D0 && ch <= 0x03D1){
        return true;
    }
    if(ch >= 0x03D5 && ch <= 0x03D7){
        return true;
    }
    if(ch >= 0x03EF && ch <= 0x03F3){
        return true;
    }
    if(ch >= 0x03FB && ch <= 0x03FC){
        return true;
    }
    if(ch >= 0x0430 && ch <= 0x045F){
        return true;
    }
    if(ch >= 0x04CE && ch <= 0x04CF){
        return true;
    }
    if(ch >= 0x0560 && ch <= 0x0588){
        return true;
    }
    if(ch >= 0x10D0 && ch <= 0x10FA){
        return true;
    }
    if(ch >= 0x10FD && ch <= 0x10FF){
        return true;
    }
    if(ch >= 0x13F8 && ch <= 0x13FD){
        return true;
    }
    if(ch >= 0x1C80 && ch <= 0x1C88){
        return true;
    }
    if(ch >= 0x1D00 && ch <= 0x1D2B){
        return true;
    }
    if(ch >= 0x1D6B && ch <= 0x1D77){
        return true;
    }
    if(ch >= 0x1D79 && ch <= 0x1D9A){
        return true;
    }
    if(ch >= 0x1E95 && ch <= 0x1E9D){
        return true;
    }
    if(ch >= 0x1EFF && ch <= 0x1F07){
        return true;
    }
    if(ch >= 0x1F10 && ch <= 0x1F15){
        return true;
    }
    if(ch >= 0x1F20 && ch <= 0x1F27){
        return true;
    }
    if(ch >= 0x1F30 && ch <= 0x1F37){
        return true;
    }
    if(ch >= 0x1F40 && ch <= 0x1F45){
        return true;
    }
    if(ch >= 0x1F50 && ch <= 0x1F57){
        return true;
    }
    if(ch >= 0x1F60 && ch <= 0x1F67){
        return true;
    }
    if(ch >= 0x1F70 && ch <= 0x1F87){
        return true;
    }
    if(ch >= 0x1F90 && ch <= 0x1F97){
        return true;
    }
    if(ch >= 0x1FA0 && ch <= 0x1FA7){
        return true;
    }
    if(ch >= 0x1FB0 && ch <= 0x1FB7){
        return true;
    }
    if(ch >= 0x1FC2 && ch <= 0x1FC7){
        return true;
    }
    if(ch >= 0x1FD0 && ch <= 0x1FD7){
        return true;
    }
    if(ch >= 0x1FE0 && ch <= 0x1FE7){
        return true;
    }
    if(ch >= 0x1FF2 && ch <= 0x1FF7){
        return true;
    }
    if(ch >= 0x210E && ch <= 0x210F){
        return true;
    }
    if(ch >= 0x213C && ch <= 0x213D){
        return true;
    }
    if(ch >= 0x2146 && ch <= 0x2149){
        return true;
    }
    if(ch >= 0x2C30 && ch <= 0x2C5F){
        return true;
    }
    if(ch >= 0x2C65 && ch <= 0x2C66){
        return true;
    }
    if(ch >= 0x2C73 && ch <= 0x2C74){
        return true;
    }
    if(ch >= 0x2C76 && ch <= 0x2C7B){
        return true;
    }
    if(ch >= 0x2CE3 && ch <= 0x2CE4){
        return true;
    }
    if(ch >= 0x2D00 && ch <= 0x2D2D){
        return true;
    }
    if(ch >= 0xA72F && ch <= 0xA731){
        return true;
    }
    if(ch >= 0xA771 && ch <= 0xA778){
        return true;
    }
    if(ch >= 0xA793 && ch <= 0xA795){
        return true;
    }
    if(ch >= 0xA7D1 && ch <= 0xA7D5){
        return true;
    }
    if(ch >= 0xAB30 && ch <= 0xAB5A){
        return true;
    }
    if(ch >= 0xAB60 && ch <= 0xAB68){
        return true;
    }
    if(ch >= 0xAB70 && ch <= 0xABBF){
        return true;
    }
    if(ch >= 0xFB00 && ch <= 0xFB17){
        return true;
    }
    if(ch >= 0xFF41 && ch <= 0xFF5A){
        return true;
    }
    if(ch >= 0x10428 && ch <= 0x1044F){
        return true;
    }
    if(ch >= 0x104D8 && ch <= 0x104FB){
        return true;
    }
    if(ch >= 0x10597 && ch <= 0x105BC){
        return true;
    }
    if(ch >= 0x10CC0 && ch <= 0x10CF2){
        return true;
    }
    if(ch >= 0x118C0 && ch <= 0x118DF){
        return true;
    }
    if(ch >= 0x16E60 && ch <= 0x16E7F){
        return true;
    }
    if(ch >= 0x1D41A && ch <= 0x1D433){
        return true;
    }
    if(ch >= 0x1D44E && ch <= 0x1D467){
        return true;
    }
    if(ch >= 0x1D482 && ch <= 0x1D49B){
        return true;
    }
    if(ch >= 0x1D4B6 && ch <= 0x1D4CF){
        return true;
    }
    if(ch >= 0x1D4EA && ch <= 0x1D503){
        return true;
    }
    if(ch >= 0x1D51E && ch <= 0x1D537){
        return true;
    }
    if(ch >= 0x1D552 && ch <= 0x1D56B){
        return true;
    }
    if(ch >= 0x1D586 && ch <= 0x1D59F){
        return true;
    }
    if(ch >= 0x1D5BA && ch <= 0x1D5D3){
        return true;
    }
    if(ch >= 0x1D5EE && ch <= 0x1D607){
        return true;
    }
    if(ch >= 0x1D622 && ch <= 0x1D63B){
        return true;
    }
    if(ch >= 0x1D656 && ch <= 0x1D66F){
        return true;
    }
    if(ch >= 0x1D68A && ch <= 0x1D6A5){
        return true;
    }
    if(ch >= 0x1D6C2 && ch <= 0x1D6DA){
        return true;
    }
    if(ch >= 0x1D6DC && ch <= 0x1D6E1){
        return true;
    }
    if(ch >= 0x1D6FC && ch <= 0x1D714){
        return true;
    }
    if(ch >= 0x1D716 && ch <= 0x1D71B){
        return true;
    }
    if(ch >= 0x1D736 && ch <= 0x1D74E){
        return true;
    }
    if(ch >= 0x1D750 && ch <= 0x1D755){
        return true;
    }
    if(ch >= 0x1D770 && ch <= 0x1D788){
        return true;
    }
    if(ch >= 0x1D78A && ch <= 0x1D78F){
        return true;
    }
    if(ch >= 0x1D7AA && ch <= 0x1D7C2){
        return true;
    }
    if(ch >= 0x1D7C4 && ch <= 0x1D7C9){
        return true;
    }
    if(ch >= 0x1DF00 && ch <= 0x1DF09){
        return true;
    }
    if(ch >= 0x1DF0B && ch <= 0x1DF2A){
        return true;
    }
    if(ch >= 0x1E922 && ch <= 0x1E943){
        return true;
    }
    switch(ch){
        case 0x00B5:
        case 0x0101:
        case 0x0103:
        case 0x0105:
        case 0x0107:
        case 0x0109:
        case 0x010B:
        case 0x010D:
        case 0x010F:
        case 0x0111:
        case 0x0113:
        case 0x0115:
        case 0x0117:
        case 0x0119:
        case 0x011B:
        case 0x011D:
        case 0x011F:
        case 0x0121:
        case 0x0123:
        case 0x0125:
        case 0x0127:
        case 0x0129:
        case 0x012B:
        case 0x012D:
        case 0x012F:
        case 0x0131:
        case 0x0133:
        case 0x0135:
        case 0x013A:
        case 0x013C:
        case 0x013E:
        case 0x0140:
        case 0x0142:
        case 0x0144:
        case 0x0146:
        case 0x014B:
        case 0x014D:
        case 0x014F:
        case 0x0151:
        case 0x0153:
        case 0x0155:
        case 0x0157:
        case 0x0159:
        case 0x015B:
        case 0x015D:
        case 0x015F:
        case 0x0161:
        case 0x0163:
        case 0x0165:
        case 0x0167:
        case 0x0169:
        case 0x016B:
        case 0x016D:
        case 0x016F:
        case 0x0171:
        case 0x0173:
        case 0x0175:
        case 0x0177:
        case 0x017A:
        case 0x017C:
        case 0x0183:
        case 0x0185:
        case 0x0188:
        case 0x0192:
        case 0x0195:
        case 0x019E:
        case 0x01A1:
        case 0x01A3:
        case 0x01A5:
        case 0x01A8:
        case 0x01AD:
        case 0x01B0:
        case 0x01B4:
        case 0x01B6:
        case 0x01C6:
        case 0x01C9:
        case 0x01CC:
        case 0x01CE:
        case 0x01D0:
        case 0x01D2:
        case 0x01D4:
        case 0x01D6:
        case 0x01D8:
        case 0x01DA:
        case 0x01DF:
        case 0x01E1:
        case 0x01E3:
        case 0x01E5:
        case 0x01E7:
        case 0x01E9:
        case 0x01EB:
        case 0x01ED:
        case 0x01F3:
        case 0x01F5:
        case 0x01F9:
        case 0x01FB:
        case 0x01FD:
        case 0x01FF:
        case 0x0201:
        case 0x0203:
        case 0x0205:
        case 0x0207:
        case 0x0209:
        case 0x020B:
        case 0x020D:
        case 0x020F:
        case 0x0211:
        case 0x0213:
        case 0x0215:
        case 0x0217:
        case 0x0219:
        case 0x021B:
        case 0x021D:
        case 0x021F:
        case 0x0221:
        case 0x0223:
        case 0x0225:
        case 0x0227:
        case 0x0229:
        case 0x022B:
        case 0x022D:
        case 0x022F:
        case 0x0231:
        case 0x023C:
        case 0x0242:
        case 0x0247:
        case 0x0249:
        case 0x024B:
        case 0x024D:
        case 0x0371:
        case 0x0373:
        case 0x0377:
        case 0x0390:
        case 0x03D9:
        case 0x03DB:
        case 0x03DD:
        case 0x03DF:
        case 0x03E1:
        case 0x03E3:
        case 0x03E5:
        case 0x03E7:
        case 0x03E9:
        case 0x03EB:
        case 0x03ED:
        case 0x03F5:
        case 0x03F8:
        case 0x0461:
        case 0x0463:
        case 0x0465:
        case 0x0467:
        case 0x0469:
        case 0x046B:
        case 0x046D:
        case 0x046F:
        case 0x0471:
        case 0x0473:
        case 0x0475:
        case 0x0477:
        case 0x0479:
        case 0x047B:
        case 0x047D:
        case 0x047F:
        case 0x0481:
        case 0x048B:
        case 0x048D:
        case 0x048F:
        case 0x0491:
        case 0x0493:
        case 0x0495:
        case 0x0497:
        case 0x0499:
        case 0x049B:
        case 0x049D:
        case 0x049F:
        case 0x04A1:
        case 0x04A3:
        case 0x04A5:
        case 0x04A7:
        case 0x04A9:
        case 0x04AB:
        case 0x04AD:
        case 0x04AF:
        case 0x04B1:
        case 0x04B3:
        case 0x04B5:
        case 0x04B7:
        case 0x04B9:
        case 0x04BB:
        case 0x04BD:
        case 0x04BF:
        case 0x04C2:
        case 0x04C4:
        case 0x04C6:
        case 0x04C8:
        case 0x04CA:
        case 0x04CC:
        case 0x04D1:
        case 0x04D3:
        case 0x04D5:
        case 0x04D7:
        case 0x04D9:
        case 0x04DB:
        case 0x04DD:
        case 0x04DF:
        case 0x04E1:
        case 0x04E3:
        case 0x04E5:
        case 0x04E7:
        case 0x04E9:
        case 0x04EB:
        case 0x04ED:
        case 0x04EF:
        case 0x04F1:
        case 0x04F3:
        case 0x04F5:
        case 0x04F7:
        case 0x04F9:
        case 0x04FB:
        case 0x04FD:
        case 0x04FF:
        case 0x0501:
        case 0x0503:
        case 0x0505:
        case 0x0507:
        case 0x0509:
        case 0x050B:
        case 0x050D:
        case 0x050F:
        case 0x0511:
        case 0x0513:
        case 0x0515:
        case 0x0517:
        case 0x0519:
        case 0x051B:
        case 0x051D:
        case 0x051F:
        case 0x0521:
        case 0x0523:
        case 0x0525:
        case 0x0527:
        case 0x0529:
        case 0x052B:
        case 0x052D:
        case 0x052F:
        case 0x1E01:
        case 0x1E03:
        case 0x1E05:
        case 0x1E07:
        case 0x1E09:
        case 0x1E0B:
        case 0x1E0D:
        case 0x1E0F:
        case 0x1E11:
        case 0x1E13:
        case 0x1E15:
        case 0x1E17:
        case 0x1E19:
        case 0x1E1B:
        case 0x1E1D:
        case 0x1E1F:
        case 0x1E21:
        case 0x1E23:
        case 0x1E25:
        case 0x1E27:
        case 0x1E29:
        case 0x1E2B:
        case 0x1E2D:
        case 0x1E2F:
        case 0x1E31:
        case 0x1E33:
        case 0x1E35:
        case 0x1E37:
        case 0x1E39:
        case 0x1E3B:
        case 0x1E3D:
        case 0x1E3F:
        case 0x1E41:
        case 0x1E43:
        case 0x1E45:
        case 0x1E47:
        case 0x1E49:
        case 0x1E4B:
        case 0x1E4D:
        case 0x1E4F:
        case 0x1E51:
        case 0x1E53:
        case 0x1E55:
        case 0x1E57:
        case 0x1E59:
        case 0x1E5B:
        case 0x1E5D:
        case 0x1E5F:
        case 0x1E61:
        case 0x1E63:
        case 0x1E65:
        case 0x1E67:
        case 0x1E69:
        case 0x1E6B:
        case 0x1E6D:
        case 0x1E6F:
        case 0x1E71:
        case 0x1E73:
        case 0x1E75:
        case 0x1E77:
        case 0x1E79:
        case 0x1E7B:
        case 0x1E7D:
        case 0x1E7F:
        case 0x1E81:
        case 0x1E83:
        case 0x1E85:
        case 0x1E87:
        case 0x1E89:
        case 0x1E8B:
        case 0x1E8D:
        case 0x1E8F:
        case 0x1E91:
        case 0x1E93:
        case 0x1E9F:
        case 0x1EA1:
        case 0x1EA3:
        case 0x1EA5:
        case 0x1EA7:
        case 0x1EA9:
        case 0x1EAB:
        case 0x1EAD:
        case 0x1EAF:
        case 0x1EB1:
        case 0x1EB3:
        case 0x1EB5:
        case 0x1EB7:
        case 0x1EB9:
        case 0x1EBB:
        case 0x1EBD:
        case 0x1EBF:
        case 0x1EC1:
        case 0x1EC3:
        case 0x1EC5:
        case 0x1EC7:
        case 0x1EC9:
        case 0x1ECB:
        case 0x1ECD:
        case 0x1ECF:
        case 0x1ED1:
        case 0x1ED3:
        case 0x1ED5:
        case 0x1ED7:
        case 0x1ED9:
        case 0x1EDB:
        case 0x1EDD:
        case 0x1EDF:
        case 0x1EE1:
        case 0x1EE3:
        case 0x1EE5:
        case 0x1EE7:
        case 0x1EE9:
        case 0x1EEB:
        case 0x1EED:
        case 0x1EEF:
        case 0x1EF1:
        case 0x1EF3:
        case 0x1EF5:
        case 0x1EF7:
        case 0x1EF9:
        case 0x1EFB:
        case 0x1EFD:
        case 0x1FBE:
        case 0x210A:
        case 0x2113:
        case 0x212F:
        case 0x2134:
        case 0x2139:
        case 0x214E:
        case 0x2184:
        case 0x2C61:
        case 0x2C68:
        case 0x2C6A:
        case 0x2C6C:
        case 0x2C71:
        case 0x2C81:
        case 0x2C83:
        case 0x2C85:
        case 0x2C87:
        case 0x2C89:
        case 0x2C8B:
        case 0x2C8D:
        case 0x2C8F:
        case 0x2C91:
        case 0x2C93:
        case 0x2C95:
        case 0x2C97:
        case 0x2C99:
        case 0x2C9B:
        case 0x2C9D:
        case 0x2C9F:
        case 0x2CA1:
        case 0x2CA3:
        case 0x2CA5:
        case 0x2CA7:
        case 0x2CA9:
        case 0x2CAB:
        case 0x2CAD:
        case 0x2CAF:
        case 0x2CB1:
        case 0x2CB3:
        case 0x2CB5:
        case 0x2CB7:
        case 0x2CB9:
        case 0x2CBB:
        case 0x2CBD:
        case 0x2CBF:
        case 0x2CC1:
        case 0x2CC3:
        case 0x2CC5:
        case 0x2CC7:
        case 0x2CC9:
        case 0x2CCB:
        case 0x2CCD:
        case 0x2CCF:
        case 0x2CD1:
        case 0x2CD3:
        case 0x2CD5:
        case 0x2CD7:
        case 0x2CD9:
        case 0x2CDB:
        case 0x2CDD:
        case 0x2CDF:
        case 0x2CE1:
        case 0x2CEC:
        case 0x2CEE:
        case 0x2CF3:
        case 0xA641:
        case 0xA643:
        case 0xA645:
        case 0xA647:
        case 0xA649:
        case 0xA64B:
        case 0xA64D:
        case 0xA64F:
        case 0xA651:
        case 0xA653:
        case 0xA655:
        case 0xA657:
        case 0xA659:
        case 0xA65B:
        case 0xA65D:
        case 0xA65F:
        case 0xA661:
        case 0xA663:
        case 0xA665:
        case 0xA667:
        case 0xA669:
        case 0xA66B:
        case 0xA66D:
        case 0xA681:
        case 0xA683:
        case 0xA685:
        case 0xA687:
        case 0xA689:
        case 0xA68B:
        case 0xA68D:
        case 0xA68F:
        case 0xA691:
        case 0xA693:
        case 0xA695:
        case 0xA697:
        case 0xA699:
        case 0xA69B:
        case 0xA723:
        case 0xA725:
        case 0xA727:
        case 0xA729:
        case 0xA72B:
        case 0xA72D:
        case 0xA733:
        case 0xA735:
        case 0xA737:
        case 0xA739:
        case 0xA73B:
        case 0xA73D:
        case 0xA73F:
        case 0xA741:
        case 0xA743:
        case 0xA745:
        case 0xA747:
        case 0xA749:
        case 0xA74B:
        case 0xA74D:
        case 0xA74F:
        case 0xA751:
        case 0xA753:
        case 0xA755:
        case 0xA757:
        case 0xA759:
        case 0xA75B:
        case 0xA75D:
        case 0xA75F:
        case 0xA761:
        case 0xA763:
        case 0xA765:
        case 0xA767:
        case 0xA769:
        case 0xA76B:
        case 0xA76D:
        case 0xA76F:
        case 0xA77A:
        case 0xA77C:
        case 0xA77F:
        case 0xA781:
        case 0xA783:
        case 0xA785:
        case 0xA787:
        case 0xA78C:
        case 0xA78E:
        case 0xA791:
        case 0xA797:
        case 0xA799:
        case 0xA79B:
        case 0xA79D:
        case 0xA79F:
        case 0xA7A1:
        case 0xA7A3:
        case 0xA7A5:
        case 0xA7A7:
        case 0xA7A9:
        case 0xA7AF:
        case 0xA7B5:
        case 0xA7B7:
        case 0xA7B9:
        case 0xA7BB:
        case 0xA7BD:
        case 0xA7BF:
        case 0xA7C1:
        case 0xA7C3:
        case 0xA7C8:
        case 0xA7CA:
        case 0xA7D7:
        case 0xA7D9:
        case 0xA7F6:
        case 0xA7FA:
        case 0x1D7CB:
            return true;
    }
    return false;
}

bool uchar_is_So_category(UChar ch)
{
    if(ch >= 0x058D && ch <= 0x058E){
        return true;
    }
    if(ch >= 0x060E && ch <= 0x060F){
        return true;
    }
    if(ch >= 0x06FD && ch <= 0x06FE){
        return true;
    }
    if(ch >= 0x0BF3 && ch <= 0x0BF8){
        return true;
    }
    if(ch >= 0x0F01 && ch <= 0x0F03){
        return true;
    }
    if(ch >= 0x0F15 && ch <= 0x0F17){
        return true;
    }
    if(ch >= 0x0F1A && ch <= 0x0F1F){
        return true;
    }
    if(ch >= 0x0FBE && ch <= 0x0FC5){
        return true;
    }
    if(ch >= 0x0FC7 && ch <= 0x0FCF){
        return true;
    }
    if(ch >= 0x0FD5 && ch <= 0x0FD8){
        return true;
    }
    if(ch >= 0x109E && ch <= 0x109F){
        return true;
    }
    if(ch >= 0x1390 && ch <= 0x1399){
        return true;
    }
    if(ch >= 0x19DE && ch <= 0x19FF){
        return true;
    }
    if(ch >= 0x1B61 && ch <= 0x1B6A){
        return true;
    }
    if(ch >= 0x1B74 && ch <= 0x1B7C){
        return true;
    }
    if(ch >= 0x2100 && ch <= 0x2101){
        return true;
    }
    if(ch >= 0x2103 && ch <= 0x2106){
        return true;
    }
    if(ch >= 0x2108 && ch <= 0x2109){
        return true;
    }
    if(ch >= 0x2116 && ch <= 0x2117){
        return true;
    }
    if(ch >= 0x211E && ch <= 0x2123){
        return true;
    }
    if(ch >= 0x213A && ch <= 0x213B){
        return true;
    }
    if(ch >= 0x214C && ch <= 0x214D){
        return true;
    }
    if(ch >= 0x218A && ch <= 0x218B){
        return true;
    }
    if(ch >= 0x2195 && ch <= 0x2199){
        return true;
    }
    if(ch >= 0x219C && ch <= 0x219F){
        return true;
    }
    if(ch >= 0x21A1 && ch <= 0x21A2){
        return true;
    }
    if(ch >= 0x21A4 && ch <= 0x21A5){
        return true;
    }
    if(ch >= 0x21A7 && ch <= 0x21AD){
        return true;
    }
    if(ch >= 0x21AF && ch <= 0x21CD){
        return true;
    }
    if(ch >= 0x21D0 && ch <= 0x21D1){
        return true;
    }
    if(ch >= 0x21D5 && ch <= 0x21F3){
        return true;
    }
    if(ch >= 0x2300 && ch <= 0x2307){
        return true;
    }
    if(ch >= 0x230C && ch <= 0x231F){
        return true;
    }
    if(ch >= 0x2322 && ch <= 0x2328){
        return true;
    }
    if(ch >= 0x232B && ch <= 0x237B){
        return true;
    }
    if(ch >= 0x237D && ch <= 0x239A){
        return true;
    }
    if(ch >= 0x23B4 && ch <= 0x23DB){
        return true;
    }
    if(ch >= 0x23E2 && ch <= 0x244A){
        return true;
    }
    if(ch >= 0x249C && ch <= 0x24E9){
        return true;
    }
    if(ch >= 0x2500 && ch <= 0x25B6){
        return true;
    }
    if(ch >= 0x25B8 && ch <= 0x25C0){
        return true;
    }
    if(ch >= 0x25C2 && ch <= 0x25F7){
        return true;
    }
    if(ch >= 0x2600 && ch <= 0x266E){
        return true;
    }
    if(ch >= 0x2670 && ch <= 0x2767){
        return true;
    }
    if(ch >= 0x2794 && ch <= 0x27BF){
        return true;
    }
    if(ch >= 0x2800 && ch <= 0x28FF){
        return true;
    }
    if(ch >= 0x2B00 && ch <= 0x2B2F){
        return true;
    }
    if(ch >= 0x2B45 && ch <= 0x2B46){
        return true;
    }
    if(ch >= 0x2B4D && ch <= 0x2BFF){
        return true;
    }
    if(ch >= 0x2CE5 && ch <= 0x2CEA){
        return true;
    }
    if(ch >= 0x2E50 && ch <= 0x2E51){
        return true;
    }
    if(ch >= 0x2E80 && ch <= 0x2FFF){
        return true;
    }
    if(ch >= 0x3012 && ch <= 0x3013){
        return true;
    }
    if(ch >= 0x3036 && ch <= 0x3037){
        return true;
    }
    if(ch >= 0x303E && ch <= 0x303F){
        return true;
    }
    if(ch >= 0x3190 && ch <= 0x3191){
        return true;
    }
    if(ch >= 0x3196 && ch <= 0x319F){
        return true;
    }
    if(ch >= 0x31C0 && ch <= 0x31EF){
        return true;
    }
    if(ch >= 0x3200 && ch <= 0x321E){
        return true;
    }
    if(ch >= 0x322A && ch <= 0x3247){
        return true;
    }
    if(ch >= 0x3260 && ch <= 0x327F){
        return true;
    }
    if(ch >= 0x328A && ch <= 0x32B0){
        return true;
    }
    if(ch >= 0x32C0 && ch <= 0x33FF){
        return true;
    }
    if(ch >= 0x4DC0 && ch <= 0x4DFF){
        return true;
    }
    if(ch >= 0xA490 && ch <= 0xA4C6){
        return true;
    }
    if(ch >= 0xA828 && ch <= 0xA82B){
        return true;
    }
    if(ch >= 0xA836 && ch <= 0xA837){
        return true;
    }
    if(ch >= 0xAA77 && ch <= 0xAA79){
        return true;
    }
    if(ch >= 0xFD40 && ch <= 0xFD4F){
        return true;
    }
    if(ch >= 0xFDFD && ch <= 0xFDFF){
        return true;
    }
    if(ch >= 0xFFED && ch <= 0xFFEE){
        return true;
    }
    if(ch >= 0xFFFC && ch <= 0xFFFD){
        return true;
    }
    if(ch >= 0x10137 && ch <= 0x1013F){
        return true;
    }
    if(ch >= 0x10179 && ch <= 0x10189){
        return true;
    }
    if(ch >= 0x1018C && ch <= 0x101FC){
        return true;
    }
    if(ch >= 0x10877 && ch <= 0x10878){
        return true;
    }
    if(ch >= 0x11FD5 && ch <= 0x11FDC){
        return true;
    }
    if(ch >= 0x11FE1 && ch <= 0x11FF1){
        return true;
    }
    if(ch >= 0x16B3C && ch <= 0x16B3F){
        return true;
    }
    if(ch >= 0x1CF50 && ch <= 0x1D164){
        return true;
    }
    if(ch >= 0x1D16A && ch <= 0x1D16C){
        return true;
    }
    if(ch >= 0x1D183 && ch <= 0x1D184){
        return true;
    }
    if(ch >= 0x1D18C && ch <= 0x1D1A9){
        return true;
    }
    if(ch >= 0x1D1AE && ch <= 0x1D241){
        return true;
    }
    if(ch >= 0x1D300 && ch <= 0x1D356){
        return true;
    }
    if(ch >= 0x1D800 && ch <= 0x1D9FF){
        return true;
    }
    if(ch >= 0x1DA37 && ch <= 0x1DA3A){
        return true;
    }
    if(ch >= 0x1DA6D && ch <= 0x1DA74){
        return true;
    }
    if(ch >= 0x1DA76 && ch <= 0x1DA83){
        return true;
    }
    if(ch >= 0x1DA85 && ch <= 0x1DA86){
        return true;
    }
    if(ch >= 0x1F000 && ch <= 0x1F0F5){
        return true;
    }
    if(ch >= 0x1F10D && ch <= 0x1F3FA){
        return true;
    }
    if(ch >= 0x1F400 && ch <= 0x1FBCA){
        return true;
    }
    switch(ch){
        case 0x00A6:
        case 0x00A9:
        case 0x00AE:
        case 0x00B0:
        case 0x0482:
        case 0x06DE:
        case 0x06E9:
        case 0x07F6:
        case 0x09FA:
        case 0x0B70:
        case 0x0BFA:
        case 0x0C7F:
        case 0x0D4F:
        case 0x0D79:
        case 0x0F13:
        case 0x0F34:
        case 0x0F36:
        case 0x0F38:
        case 0x166D:
        case 0x1940:
        case 0x2114:
        case 0x2125:
        case 0x2127:
        case 0x2129:
        case 0x212E:
        case 0x214A:
        case 0x214F:
        case 0x21D3:
        case 0x3004:
        case 0x3020:
        case 0x3250:
        case 0xA839:
        case 0xFDCF:
        case 0xFFE4:
        case 0xFFE8:
        case 0x10AC8:
        case 0x1173F:
        case 0x16B45:
        case 0x1BC9C:
        case 0x1D245:
        case 0x1E14F:
        case 0x1ECAC:
        case 0x1ED2E:
            return true;
    }
    return false;
}

bool uchar_is_Lo_category(UChar ch)
{
    if(ch >= 0x01C0 && ch <= 0x01C3){
        return true;
    }
    if(ch >= 0x05D0 && ch <= 0x05F2){
        return true;
    }
    if(ch >= 0x0620 && ch <= 0x063F){
        return true;
    }
    if(ch >= 0x0641 && ch <= 0x064A){
        return true;
    }
    if(ch >= 0x066E && ch <= 0x066F){
        return true;
    }
    if(ch >= 0x0671 && ch <= 0x06D3){
        return true;
    }
    if(ch >= 0x06EE && ch <= 0x06EF){
        return true;
    }
    if(ch >= 0x06FA && ch <= 0x06FC){
        return true;
    }
    if(ch >= 0x0712 && ch <= 0x072F){
        return true;
    }
    if(ch >= 0x074D && ch <= 0x07A5){
        return true;
    }
    if(ch >= 0x07CA && ch <= 0x07EA){
        return true;
    }
    if(ch >= 0x0800 && ch <= 0x0815){
        return true;
    }
    if(ch >= 0x0840 && ch <= 0x0858){
        return true;
    }
    if(ch >= 0x0860 && ch <= 0x0887){
        return true;
    }
    if(ch >= 0x0889 && ch <= 0x088E){
        return true;
    }
    if(ch >= 0x08A0 && ch <= 0x08C8){
        return true;
    }
    if(ch >= 0x0904 && ch <= 0x0939){
        return true;
    }
    if(ch >= 0x0958 && ch <= 0x0961){
        return true;
    }
    if(ch >= 0x0972 && ch <= 0x0980){
        return true;
    }
    if(ch >= 0x0985 && ch <= 0x09B9){
        return true;
    }
    if(ch >= 0x09DC && ch <= 0x09E1){
        return true;
    }
    if(ch >= 0x09F0 && ch <= 0x09F1){
        return true;
    }
    if(ch >= 0x0A05 && ch <= 0x0A39){
        return true;
    }
    if(ch >= 0x0A59 && ch <= 0x0A5E){
        return true;
    }
    if(ch >= 0x0A72 && ch <= 0x0A74){
        return true;
    }
    if(ch >= 0x0A85 && ch <= 0x0AB9){
        return true;
    }
    if(ch >= 0x0AD0 && ch <= 0x0AE1){
        return true;
    }
    if(ch >= 0x0B05 && ch <= 0x0B39){
        return true;
    }
    if(ch >= 0x0B5C && ch <= 0x0B61){
        return true;
    }
    if(ch >= 0x0B83 && ch <= 0x0BB9){
        return true;
    }
    if(ch >= 0x0C05 && ch <= 0x0C39){
        return true;
    }
    if(ch >= 0x0C58 && ch <= 0x0C61){
        return true;
    }
    if(ch >= 0x0C85 && ch <= 0x0CB9){
        return true;
    }
    if(ch >= 0x0CDD && ch <= 0x0CE1){
        return true;
    }
    if(ch >= 0x0CF1 && ch <= 0x0CF2){
        return true;
    }
    if(ch >= 0x0D04 && ch <= 0x0D3A){
        return true;
    }
    if(ch >= 0x0D54 && ch <= 0x0D56){
        return true;
    }
    if(ch >= 0x0D5F && ch <= 0x0D61){
        return true;
    }
    if(ch >= 0x0D7A && ch <= 0x0D7F){
        return true;
    }
    if(ch >= 0x0D85 && ch <= 0x0DC6){
        return true;
    }
    if(ch >= 0x0E01 && ch <= 0x0E30){
        return true;
    }
    if(ch >= 0x0E32 && ch <= 0x0E33){
        return true;
    }
    if(ch >= 0x0E40 && ch <= 0x0E45){
        return true;
    }
    if(ch >= 0x0E81 && ch <= 0x0EB0){
        return true;
    }
    if(ch >= 0x0EB2 && ch <= 0x0EB3){
        return true;
    }
    if(ch >= 0x0EBD && ch <= 0x0EC4){
        return true;
    }
    if(ch >= 0x0EDC && ch <= 0x0F00){
        return true;
    }
    if(ch >= 0x0F40 && ch <= 0x0F6C){
        return true;
    }
    if(ch >= 0x0F88 && ch <= 0x0F8C){
        return true;
    }
    if(ch >= 0x1000 && ch <= 0x102A){
        return true;
    }
    if(ch >= 0x1050 && ch <= 0x1055){
        return true;
    }
    if(ch >= 0x105A && ch <= 0x105D){
        return true;
    }
    if(ch >= 0x1065 && ch <= 0x1066){
        return true;
    }
    if(ch >= 0x106E && ch <= 0x1070){
        return true;
    }
    if(ch >= 0x1075 && ch <= 0x1081){
        return true;
    }
    if(ch >= 0x1100 && ch <= 0x135A){
        return true;
    }
    if(ch >= 0x1380 && ch <= 0x138F){
        return true;
    }
    if(ch >= 0x1401 && ch <= 0x166C){
        return true;
    }
    if(ch >= 0x166F && ch <= 0x167F){
        return true;
    }
    if(ch >= 0x1681 && ch <= 0x169A){
        return true;
    }
    if(ch >= 0x16A0 && ch <= 0x16EA){
        return true;
    }
    if(ch >= 0x16F1 && ch <= 0x1711){
        return true;
    }
    if(ch >= 0x171F && ch <= 0x1731){
        return true;
    }
    if(ch >= 0x1740 && ch <= 0x1751){
        return true;
    }
    if(ch >= 0x1760 && ch <= 0x1770){
        return true;
    }
    if(ch >= 0x1780 && ch <= 0x17B3){
        return true;
    }
    if(ch >= 0x1820 && ch <= 0x1842){
        return true;
    }
    if(ch >= 0x1844 && ch <= 0x1884){
        return true;
    }
    if(ch >= 0x1887 && ch <= 0x18A8){
        return true;
    }
    if(ch >= 0x18AA && ch <= 0x191E){
        return true;
    }
    if(ch >= 0x1950 && ch <= 0x19C9){
        return true;
    }
    if(ch >= 0x1A00 && ch <= 0x1A16){
        return true;
    }
    if(ch >= 0x1A20 && ch <= 0x1A54){
        return true;
    }
    if(ch >= 0x1B05 && ch <= 0x1B33){
        return true;
    }
    if(ch >= 0x1B45 && ch <= 0x1B4C){
        return true;
    }
    if(ch >= 0x1B83 && ch <= 0x1BA0){
        return true;
    }
    if(ch >= 0x1BAE && ch <= 0x1BAF){
        return true;
    }
    if(ch >= 0x1BBA && ch <= 0x1BE5){
        return true;
    }
    if(ch >= 0x1C00 && ch <= 0x1C23){
        return true;
    }
    if(ch >= 0x1C4D && ch <= 0x1C4F){
        return true;
    }
    if(ch >= 0x1C5A && ch <= 0x1C77){
        return true;
    }
    if(ch >= 0x1CE9 && ch <= 0x1CEC){
        return true;
    }
    if(ch >= 0x1CEE && ch <= 0x1CF3){
        return true;
    }
    if(ch >= 0x1CF5 && ch <= 0x1CF6){
        return true;
    }
    if(ch >= 0x2135 && ch <= 0x2138){
        return true;
    }
    if(ch >= 0x2D30 && ch <= 0x2D67){
        return true;
    }
    if(ch >= 0x2D80 && ch <= 0x2DDE){
        return true;
    }
    if(ch >= 0x3041 && ch <= 0x3096){
        return true;
    }
    if(ch >= 0x30A1 && ch <= 0x30FA){
        return true;
    }
    if(ch >= 0x30FF && ch <= 0x318E){
        return true;
    }
    if(ch >= 0x31A0 && ch <= 0x31BF){
        return true;
    }
    if(ch >= 0x31F0 && ch <= 0x31FF){
        return true;
    }
    if(ch >= 0x3400 && ch <= 0x4DBF){
        return true;
    }
    if(ch >= 0x4E00 && ch <= 0xA014){
        return true;
    }
    if(ch >= 0xA016 && ch <= 0xA48C){
        return true;
    }
    if(ch >= 0xA4D0 && ch <= 0xA4F7){
        return true;
    }
    if(ch >= 0xA500 && ch <= 0xA60B){
        return true;
    }
    if(ch >= 0xA610 && ch <= 0xA61F){
        return true;
    }
    if(ch >= 0xA62A && ch <= 0xA62B){
        return true;
    }
    if(ch >= 0xA6A0 && ch <= 0xA6E5){
        return true;
    }
    if(ch >= 0xA7FB && ch <= 0xA801){
        return true;
    }
    if(ch >= 0xA803 && ch <= 0xA805){
        return true;
    }
    if(ch >= 0xA807 && ch <= 0xA80A){
        return true;
    }
    if(ch >= 0xA80C && ch <= 0xA822){
        return true;
    }
    if(ch >= 0xA840 && ch <= 0xA873){
        return true;
    }
    if(ch >= 0xA882 && ch <= 0xA8B3){
        return true;
    }
    if(ch >= 0xA8F2 && ch <= 0xA8F7){
        return true;
    }
    if(ch >= 0xA8FD && ch <= 0xA8FE){
        return true;
    }
    if(ch >= 0xA90A && ch <= 0xA925){
        return true;
    }
    if(ch >= 0xA930 && ch <= 0xA946){
        return true;
    }
    if(ch >= 0xA960 && ch <= 0xA97C){
        return true;
    }
    if(ch >= 0xA984 && ch <= 0xA9B2){
        return true;
    }
    if(ch >= 0xA9E0 && ch <= 0xA9E4){
        return true;
    }
    if(ch >= 0xA9E7 && ch <= 0xA9EF){
        return true;
    }
    if(ch >= 0xA9FA && ch <= 0xAA28){
        return true;
    }
    if(ch >= 0xAA40 && ch <= 0xAA42){
        return true;
    }
    if(ch >= 0xAA44 && ch <= 0xAA4B){
        return true;
    }
    if(ch >= 0xAA60 && ch <= 0xAA6F){
        return true;
    }
    if(ch >= 0xAA71 && ch <= 0xAA76){
        return true;
    }
    if(ch >= 0xAA7E && ch <= 0xAAAF){
        return true;
    }
    if(ch >= 0xAAB5 && ch <= 0xAAB6){
        return true;
    }
    if(ch >= 0xAAB9 && ch <= 0xAABD){
        return true;
    }
    if(ch >= 0xAAC2 && ch <= 0xAADC){
        return true;
    }
    if(ch >= 0xAAE0 && ch <= 0xAAEA){
        return true;
    }
    if(ch >= 0xAB01 && ch <= 0xAB2E){
        return true;
    }
    if(ch >= 0xABC0 && ch <= 0xABE2){
        return true;
    }
    if(ch >= 0xAC00 && ch <= 0xD7FB){
        return true;
    }
    if(ch >= 0xF900 && ch <= 0xFAD9){
        return true;
    }
    if(ch >= 0xFB1F && ch <= 0xFB28){
        return true;
    }
    if(ch >= 0xFB2A && ch <= 0xFBB1){
        return true;
    }
    if(ch >= 0xFBD3 && ch <= 0xFD3D){
        return true;
    }
    if(ch >= 0xFD50 && ch <= 0xFDC7){
        return true;
    }
    if(ch >= 0xFDF0 && ch <= 0xFDFB){
        return true;
    }
    if(ch >= 0xFE70 && ch <= 0xFEFC){
        return true;
    }
    if(ch >= 0xFF66 && ch <= 0xFF6F){
        return true;
    }
    if(ch >= 0xFF71 && ch <= 0xFF9D){
        return true;
    }
    if(ch >= 0xFFA0 && ch <= 0xFFDC){
        return true;
    }
    if(ch >= 0x10000 && ch <= 0x100FA){
        return true;
    }
    if(ch >= 0x10280 && ch <= 0x102D0){
        return true;
    }
    if(ch >= 0x10300 && ch <= 0x1031F){
        return true;
    }
    if(ch >= 0x1032D && ch <= 0x10340){
        return true;
    }
    if(ch >= 0x10342 && ch <= 0x10349){
        return true;
    }
    if(ch >= 0x10350 && ch <= 0x10375){
        return true;
    }
    if(ch >= 0x10380 && ch <= 0x1039D){
        return true;
    }
    if(ch >= 0x103A0 && ch <= 0x103CF){
        return true;
    }
    if(ch >= 0x10450 && ch <= 0x1049D){
        return true;
    }
    if(ch >= 0x10500 && ch <= 0x10563){
        return true;
    }
    if(ch >= 0x10600 && ch <= 0x10767){
        return true;
    }
    if(ch >= 0x10800 && ch <= 0x10855){
        return true;
    }
    if(ch >= 0x10860 && ch <= 0x10876){
        return true;
    }
    if(ch >= 0x10880 && ch <= 0x1089E){
        return true;
    }
    if(ch >= 0x108E0 && ch <= 0x108F5){
        return true;
    }
    if(ch >= 0x10900 && ch <= 0x10915){
        return true;
    }
    if(ch >= 0x10920 && ch <= 0x10939){
        return true;
    }
    if(ch >= 0x10980 && ch <= 0x109B7){
        return true;
    }
    if(ch >= 0x109BE && ch <= 0x109BF){
        return true;
    }
    if(ch >= 0x10A10 && ch <= 0x10A35){
        return true;
    }
    if(ch >= 0x10A60 && ch <= 0x10A7C){
        return true;
    }
    if(ch >= 0x10A80 && ch <= 0x10A9C){
        return true;
    }
    if(ch >= 0x10AC0 && ch <= 0x10AC7){
        return true;
    }
    if(ch >= 0x10AC9 && ch <= 0x10AE4){
        return true;
    }
    if(ch >= 0x10B00 && ch <= 0x10B35){
        return true;
    }
    if(ch >= 0x10B40 && ch <= 0x10B55){
        return true;
    }
    if(ch >= 0x10B60 && ch <= 0x10B72){
        return true;
    }
    if(ch >= 0x10B80 && ch <= 0x10B91){
        return true;
    }
    if(ch >= 0x10C00 && ch <= 0x10C48){
        return true;
    }
    if(ch >= 0x10D00 && ch <= 0x10D23){
        return true;
    }
    if(ch >= 0x10E80 && ch <= 0x10EA9){
        return true;
    }
    if(ch >= 0x10EB0 && ch <= 0x10EB1){
        return true;
    }
    if(ch >= 0x10F00 && ch <= 0x10F1C){
        return true;
    }
    if(ch >= 0x10F27 && ch <= 0x10F45){
        return true;
    }
    if(ch >= 0x10F70 && ch <= 0x10F81){
        return true;
    }
    if(ch >= 0x10FB0 && ch <= 0x10FC4){
        return true;
    }
    if(ch >= 0x10FE0 && ch <= 0x10FF6){
        return true;
    }
    if(ch >= 0x11003 && ch <= 0x11037){
        return true;
    }
    if(ch >= 0x11071 && ch <= 0x11072){
        return true;
    }
    if(ch >= 0x11083 && ch <= 0x110AF){
        return true;
    }
    if(ch >= 0x110D0 && ch <= 0x110E8){
        return true;
    }
    if(ch >= 0x11103 && ch <= 0x11126){
        return true;
    }
    if(ch >= 0x11147 && ch <= 0x11172){
        return true;
    }
    if(ch >= 0x11183 && ch <= 0x111B2){
        return true;
    }
    if(ch >= 0x111C1 && ch <= 0x111C4){
        return true;
    }
    if(ch >= 0x11200 && ch <= 0x1122B){
        return true;
    }
    if(ch >= 0x1123F && ch <= 0x11240){
        return true;
    }
    if(ch >= 0x11280 && ch <= 0x112A8){
        return true;
    }
    if(ch >= 0x112B0 && ch <= 0x112DE){
        return true;
    }
    if(ch >= 0x11305 && ch <= 0x11339){
        return true;
    }
    if(ch >= 0x1135D && ch <= 0x11361){
        return true;
    }
    if(ch >= 0x11400 && ch <= 0x11434){
        return true;
    }
    if(ch >= 0x11447 && ch <= 0x1144A){
        return true;
    }
    if(ch >= 0x1145F && ch <= 0x114AF){
        return true;
    }
    if(ch >= 0x114C4 && ch <= 0x114C5){
        return true;
    }
    if(ch >= 0x11580 && ch <= 0x115AE){
        return true;
    }
    if(ch >= 0x115D8 && ch <= 0x115DB){
        return true;
    }
    if(ch >= 0x11600 && ch <= 0x1162F){
        return true;
    }
    if(ch >= 0x11680 && ch <= 0x116AA){
        return true;
    }
    if(ch >= 0x11700 && ch <= 0x1171A){
        return true;
    }
    if(ch >= 0x11740 && ch <= 0x1182B){
        return true;
    }
    if(ch >= 0x118FF && ch <= 0x1192F){
        return true;
    }
    if(ch >= 0x119A0 && ch <= 0x119D0){
        return true;
    }
    if(ch >= 0x11A0B && ch <= 0x11A32){
        return true;
    }
    if(ch >= 0x11A5C && ch <= 0x11A89){
        return true;
    }
    if(ch >= 0x11AB0 && ch <= 0x11AF8){
        return true;
    }
    if(ch >= 0x11C00 && ch <= 0x11C2E){
        return true;
    }
    if(ch >= 0x11C72 && ch <= 0x11C8F){
        return true;
    }
    if(ch >= 0x11D00 && ch <= 0x11D30){
        return true;
    }
    if(ch >= 0x11D60 && ch <= 0x11D89){
        return true;
    }
    if(ch >= 0x11EE0 && ch <= 0x11EF2){
        return true;
    }
    if(ch >= 0x11F04 && ch <= 0x11F33){
        return true;
    }
    if(ch >= 0x12000 && ch <= 0x12399){
        return true;
    }
    if(ch >= 0x12480 && ch <= 0x12FF0){
        return true;
    }
    if(ch >= 0x13000 && ch <= 0x1342F){
        return true;
    }
    if(ch >= 0x13441 && ch <= 0x13446){
        return true;
    }
    if(ch >= 0x14400 && ch <= 0x16A5E){
        return true;
    }
    if(ch >= 0x16A70 && ch <= 0x16ABE){
        return true;
    }
    if(ch >= 0x16AD0 && ch <= 0x16AED){
        return true;
    }
    if(ch >= 0x16B00 && ch <= 0x16B2F){
        return true;
    }
    if(ch >= 0x16B63 && ch <= 0x16B8F){
        return true;
    }
    if(ch >= 0x16F00 && ch <= 0x16F4A){
        return true;
    }
    if(ch >= 0x17000 && ch <= 0x18D08){
        return true;
    }
    if(ch >= 0x1B000 && ch <= 0x1BC99){
        return true;
    }
    if(ch >= 0x1E100 && ch <= 0x1E12C){
        return true;
    }
    if(ch >= 0x1E290 && ch <= 0x1E2AD){
        return true;
    }
    if(ch >= 0x1E2C0 && ch <= 0x1E2EB){
        return true;
    }
    if(ch >= 0x1E4D0 && ch <= 0x1E4EA){
        return true;
    }
    if(ch >= 0x1E7E0 && ch <= 0x1E8C4){
        return true;
    }
    if(ch >= 0x1EE00 && ch <= 0x1EEBB){
        return true;
    }
    if(ch >= 0x20000 && ch <= 0x323AF){
        return true;
    }
    switch(ch){
        case 0x00AA:
        case 0x00BA:
        case 0x01BB:
        case 0x0294:
        case 0x06D5:
        case 0x06FF:
        case 0x0710:
        case 0x07B1:
        case 0x093D:
        case 0x0950:
        case 0x09BD:
        case 0x09CE:
        case 0x09FC:
        case 0x0ABD:
        case 0x0AF9:
        case 0x0B3D:
        case 0x0B71:
        case 0x0BD0:
        case 0x0C3D:
        case 0x0C80:
        case 0x0CBD:
        case 0x0D3D:
        case 0x0D4E:
        case 0x103F:
        case 0x1061:
        case 0x108E:
        case 0x17DC:
        case 0x1CFA:
        case 0x3006:
        case 0x303C:
        case 0x309F:
        case 0xA66E:
        case 0xA78F:
        case 0xA7F7:
        case 0xA8FB:
        case 0xAA7A:
        case 0xAAB1:
        case 0xAAC0:
        case 0xAAF2:
        case 0xFB1D:
        case 0x10A00:
        case 0x11075:
        case 0x11144:
        case 0x11176:
        case 0x111DA:
        case 0x111DC:
        case 0x1133D:
        case 0x11350:
        case 0x114C7:
        case 0x11644:
        case 0x116B8:
        case 0x1193F:
        case 0x11941:
        case 0x119E1:
        case 0x119E3:
        case 0x11A00:
        case 0x11A3A:
        case 0x11A50:
        case 0x11A9D:
        case 0x11C40:
        case 0x11D46:
        case 0x11D98:
        case 0x11F02:
        case 0x11FB0:
        case 0x16F50:
        case 0x1DF0A:
        case 0x1E14E:
            return true;
    }
    return false;
}

bool uchar_is_Pi_category(UChar ch)
{
    if(ch >= 0x201B && ch <= 0x201C){
        return true;
    }
    switch(ch){
        case 0x00AB:
        case 0x2018:
        case 0x201F:
        case 0x2039:
        case 0x2E02:
        case 0x2E04:
        case 0x2E09:
        case 0x2E0C:
        case 0x2E1C:
        case 0x2E20:
            return true;
    }
    return false;
}

bool uchar_is_Cf_category(UChar ch)
{
    if(ch >= 0x0600 && ch <= 0x0605){
        return true;
    }
    if(ch >= 0x0890 && ch <= 0x0891){
        return true;
    }
    if(ch >= 0x200B && ch <= 0x200F){
        return true;
    }
    if(ch >= 0x202A && ch <= 0x202E){
        return true;
    }
    if(ch >= 0x2060 && ch <= 0x206F){
        return true;
    }
    if(ch >= 0xFFF9 && ch <= 0xFFFB){
        return true;
    }
    if(ch >= 0x13430 && ch <= 0x1343F){
        return true;
    }
    if(ch >= 0x1BCA0 && ch <= 0x1BCA3){
        return true;
    }
    if(ch >= 0x1D173 && ch <= 0x1D17A){
        return true;
    }
    if(ch >= 0xE0001 && ch <= 0xE007F){
        return true;
    }
    switch(ch){
        case 0x00AD:
        case 0x061C:
        case 0x06DD:
        case 0x070F:
        case 0x08E2:
        case 0x180E:
        case 0xFEFF:
        case 0x110BD:
        case 0x110CD:
            return true;
    }
    return false;
}

bool uchar_is_No_category(UChar ch)
{
    if(ch >= 0x00B2 && ch <= 0x00B3){
        return true;
    }
    if(ch >= 0x00BC && ch <= 0x00BE){
        return true;
    }
    if(ch >= 0x09F4 && ch <= 0x09F9){
        return true;
    }
    if(ch >= 0x0B72 && ch <= 0x0B77){
        return true;
    }
    if(ch >= 0x0BF0 && ch <= 0x0BF2){
        return true;
    }
    if(ch >= 0x0C78 && ch <= 0x0C7E){
        return true;
    }
    if(ch >= 0x0D58 && ch <= 0x0D5E){
        return true;
    }
    if(ch >= 0x0D70 && ch <= 0x0D78){
        return true;
    }
    if(ch >= 0x0F2A && ch <= 0x0F33){
        return true;
    }
    if(ch >= 0x1369 && ch <= 0x137C){
        return true;
    }
    if(ch >= 0x17F0 && ch <= 0x17F9){
        return true;
    }
    if(ch >= 0x2074 && ch <= 0x2079){
        return true;
    }
    if(ch >= 0x2080 && ch <= 0x2089){
        return true;
    }
    if(ch >= 0x2150 && ch <= 0x215F){
        return true;
    }
    if(ch >= 0x2460 && ch <= 0x249B){
        return true;
    }
    if(ch >= 0x24EA && ch <= 0x24FF){
        return true;
    }
    if(ch >= 0x2776 && ch <= 0x2793){
        return true;
    }
    if(ch >= 0x3192 && ch <= 0x3195){
        return true;
    }
    if(ch >= 0x3220 && ch <= 0x3229){
        return true;
    }
    if(ch >= 0x3248 && ch <= 0x324F){
        return true;
    }
    if(ch >= 0x3251 && ch <= 0x325F){
        return true;
    }
    if(ch >= 0x3280 && ch <= 0x3289){
        return true;
    }
    if(ch >= 0x32B1 && ch <= 0x32BF){
        return true;
    }
    if(ch >= 0xA830 && ch <= 0xA835){
        return true;
    }
    if(ch >= 0x10107 && ch <= 0x10133){
        return true;
    }
    if(ch >= 0x10175 && ch <= 0x10178){
        return true;
    }
    if(ch >= 0x1018A && ch <= 0x1018B){
        return true;
    }
    if(ch >= 0x102E1 && ch <= 0x102FB){
        return true;
    }
    if(ch >= 0x10320 && ch <= 0x10323){
        return true;
    }
    if(ch >= 0x10858 && ch <= 0x1085F){
        return true;
    }
    if(ch >= 0x10879 && ch <= 0x1087F){
        return true;
    }
    if(ch >= 0x108A7 && ch <= 0x108AF){
        return true;
    }
    if(ch >= 0x108FB && ch <= 0x108FF){
        return true;
    }
    if(ch >= 0x10916 && ch <= 0x1091B){
        return true;
    }
    if(ch >= 0x109BC && ch <= 0x109BD){
        return true;
    }
    if(ch >= 0x109C0 && ch <= 0x109FF){
        return true;
    }
    if(ch >= 0x10A40 && ch <= 0x10A48){
        return true;
    }
    if(ch >= 0x10A7D && ch <= 0x10A7E){
        return true;
    }
    if(ch >= 0x10A9D && ch <= 0x10A9F){
        return true;
    }
    if(ch >= 0x10AEB && ch <= 0x10AEF){
        return true;
    }
    if(ch >= 0x10B58 && ch <= 0x10B5F){
        return true;
    }
    if(ch >= 0x10B78 && ch <= 0x10B7F){
        return true;
    }
    if(ch >= 0x10BA9 && ch <= 0x10BAF){
        return true;
    }
    if(ch >= 0x10CFA && ch <= 0x10CFF){
        return true;
    }
    if(ch >= 0x10E60 && ch <= 0x10E7E){
        return true;
    }
    if(ch >= 0x10F1D && ch <= 0x10F26){
        return true;
    }
    if(ch >= 0x10F51 && ch <= 0x10F54){
        return true;
    }
    if(ch >= 0x10FC5 && ch <= 0x10FCB){
        return true;
    }
    if(ch >= 0x11052 && ch <= 0x11065){
        return true;
    }
    if(ch >= 0x111E1 && ch <= 0x111F4){
        return true;
    }
    if(ch >= 0x1173A && ch <= 0x1173B){
        return true;
    }
    if(ch >= 0x118EA && ch <= 0x118F2){
        return true;
    }
    if(ch >= 0x11C5A && ch <= 0x11C6C){
        return true;
    }
    if(ch >= 0x11FC0 && ch <= 0x11FD4){
        return true;
    }
    if(ch >= 0x16B5B && ch <= 0x16B61){
        return true;
    }
    if(ch >= 0x16E80 && ch <= 0x16E96){
        return true;
    }
    if(ch >= 0x1D2C0 && ch <= 0x1D2F3){
        return true;
    }
    if(ch >= 0x1D360 && ch <= 0x1D378){
        return true;
    }
    if(ch >= 0x1E8C7 && ch <= 0x1E8CF){
        return true;
    }
    if(ch >= 0x1EC71 && ch <= 0x1ECAB){
        return true;
    }
    if(ch >= 0x1ECAD && ch <= 0x1ECAF){
        return true;
    }
    if(ch >= 0x1ECB1 && ch <= 0x1ED2D){
        return true;
    }
    if(ch >= 0x1ED2F && ch <= 0x1ED3D){
        return true;
    }
    if(ch >= 0x1F100 && ch <= 0x1F10C){
        return true;
    }
    switch(ch){
        case 0x00B9:
        case 0x19DA:
        case 0x2070:
        case 0x2189:
        case 0x2CFD:
            return true;
    }
    return false;
}

bool uchar_is_Pf_category(UChar ch)
{
    switch(ch){
        case 0x00BB:
        case 0x2019:
        case 0x201D:
        case 0x203A:
        case 0x2E03:
        case 0x2E05:
        case 0x2E0A:
        case 0x2E0D:
        case 0x2E1D:
        case 0x2E21:
            return true;
    }
    return false;
}

bool uchar_is_Lt_category(UChar ch)
{
    if(ch >= 0x1F88 && ch <= 0x1F8F){
        return true;
    }
    if(ch >= 0x1F98 && ch <= 0x1F9F){
        return true;
    }
    if(ch >= 0x1FA8 && ch <= 0x1FAF){
        return true;
    }
    switch(ch){
        case 0x01C5:
        case 0x01C8:
        case 0x01CB:
        case 0x01F2:
        case 0x1FBC:
        case 0x1FCC:
        case 0x1FFC:
            return true;
    }
    return false;
}

bool uchar_is_Lm_category(UChar ch)
{
    if(ch >= 0x02B0 && ch <= 0x02C1){
        return true;
    }
    if(ch >= 0x02C6 && ch <= 0x02D1){
        return true;
    }
    if(ch >= 0x02E0 && ch <= 0x02E4){
        return true;
    }
    if(ch >= 0x06E5 && ch <= 0x06E6){
        return true;
    }
    if(ch >= 0x07F4 && ch <= 0x07F5){
        return true;
    }
    if(ch >= 0x1C78 && ch <= 0x1C7D){
        return true;
    }
    if(ch >= 0x1D2C && ch <= 0x1D6A){
        return true;
    }
    if(ch >= 0x1D9B && ch <= 0x1DBF){
        return true;
    }
    if(ch >= 0x2090 && ch <= 0x209C){
        return true;
    }
    if(ch >= 0x2C7C && ch <= 0x2C7D){
        return true;
    }
    if(ch >= 0x3031 && ch <= 0x3035){
        return true;
    }
    if(ch >= 0x309D && ch <= 0x309E){
        return true;
    }
    if(ch >= 0x30FC && ch <= 0x30FE){
        return true;
    }
    if(ch >= 0xA4F8 && ch <= 0xA4FD){
        return true;
    }
    if(ch >= 0xA69C && ch <= 0xA69D){
        return true;
    }
    if(ch >= 0xA717 && ch <= 0xA71F){
        return true;
    }
    if(ch >= 0xA7F2 && ch <= 0xA7F4){
        return true;
    }
    if(ch >= 0xA7F8 && ch <= 0xA7F9){
        return true;
    }
    if(ch >= 0xAAF3 && ch <= 0xAAF4){
        return true;
    }
    if(ch >= 0xAB5C && ch <= 0xAB5F){
        return true;
    }
    if(ch >= 0xFF9E && ch <= 0xFF9F){
        return true;
    }
    if(ch >= 0x10780 && ch <= 0x107BA){
        return true;
    }
    if(ch >= 0x16B40 && ch <= 0x16B43){
        return true;
    }
    if(ch >= 0x16F93 && ch <= 0x16FE1){
        return true;
    }
    if(ch >= 0x1AFF0 && ch <= 0x1AFFE){
        return true;
    }
    if(ch >= 0x1E030 && ch <= 0x1E06D){
        return true;
    }
    if(ch >= 0x1E137 && ch <= 0x1E13D){
        return true;
    }
    switch(ch){
        case 0x02EC:
        case 0x02EE:
        case 0x0374:
        case 0x037A:
        case 0x0559:
        case 0x0640:
        case 0x07FA:
        case 0x081A:
        case 0x0824:
        case 0x0828:
        case 0x08C9:
        case 0x0971:
        case 0x0E46:
        case 0x0EC6:
        case 0x10FC:
        case 0x17D7:
        case 0x1843:
        case 0x1AA7:
        case 0x1D78:
        case 0x2071:
        case 0x207F:
        case 0x2D6F:
        case 0x2E2F:
        case 0x3005:
        case 0x303B:
        case 0xA015:
        case 0xA60C:
        case 0xA67F:
        case 0xA770:
        case 0xA788:
        case 0xA9CF:
        case 0xA9E6:
        case 0xAA70:
        case 0xAADD:
        case 0xAB69:
        case 0xFF70:
        case 0x16FE3:
        case 0x1E4EB:
        case 0x1E94B:
            return true;
    }
    return false;
}

bool uchar_is_Mn_category(UChar ch)
{
    if(ch >= 0x0300 && ch <= 0x036F){
        return true;
    }
    if(ch >= 0x0483 && ch <= 0x0487){
        return true;
    }
    if(ch >= 0x0591 && ch <= 0x05BD){
        return true;
    }
    if(ch >= 0x05C1 && ch <= 0x05C2){
        return true;
    }
    if(ch >= 0x05C4 && ch <= 0x05C5){
        return true;
    }
    if(ch >= 0x0610 && ch <= 0x061A){
        return true;
    }
    if(ch >= 0x064B && ch <= 0x065F){
        return true;
    }
    if(ch >= 0x06D6 && ch <= 0x06DC){
        return true;
    }
    if(ch >= 0x06DF && ch <= 0x06E4){
        return true;
    }
    if(ch >= 0x06E7 && ch <= 0x06E8){
        return true;
    }
    if(ch >= 0x06EA && ch <= 0x06ED){
        return true;
    }
    if(ch >= 0x0730 && ch <= 0x074A){
        return true;
    }
    if(ch >= 0x07A6 && ch <= 0x07B0){
        return true;
    }
    if(ch >= 0x07EB && ch <= 0x07F3){
        return true;
    }
    if(ch >= 0x0816 && ch <= 0x0819){
        return true;
    }
    if(ch >= 0x081B && ch <= 0x0823){
        return true;
    }
    if(ch >= 0x0825 && ch <= 0x0827){
        return true;
    }
    if(ch >= 0x0829 && ch <= 0x082D){
        return true;
    }
    if(ch >= 0x0859 && ch <= 0x085B){
        return true;
    }
    if(ch >= 0x0898 && ch <= 0x089F){
        return true;
    }
    if(ch >= 0x08CA && ch <= 0x08E1){
        return true;
    }
    if(ch >= 0x08E3 && ch <= 0x0902){
        return true;
    }
    if(ch >= 0x0941 && ch <= 0x0948){
        return true;
    }
    if(ch >= 0x0951 && ch <= 0x0957){
        return true;
    }
    if(ch >= 0x0962 && ch <= 0x0963){
        return true;
    }
    if(ch >= 0x09C1 && ch <= 0x09C4){
        return true;
    }
    if(ch >= 0x09E2 && ch <= 0x09E3){
        return true;
    }
    if(ch >= 0x09FE && ch <= 0x0A02){
        return true;
    }
    if(ch >= 0x0A41 && ch <= 0x0A51){
        return true;
    }
    if(ch >= 0x0A70 && ch <= 0x0A71){
        return true;
    }
    if(ch >= 0x0A81 && ch <= 0x0A82){
        return true;
    }
    if(ch >= 0x0AC1 && ch <= 0x0AC8){
        return true;
    }
    if(ch >= 0x0AE2 && ch <= 0x0AE3){
        return true;
    }
    if(ch >= 0x0AFA && ch <= 0x0B01){
        return true;
    }
    if(ch >= 0x0B41 && ch <= 0x0B44){
        return true;
    }
    if(ch >= 0x0B4D && ch <= 0x0B56){
        return true;
    }
    if(ch >= 0x0B62 && ch <= 0x0B63){
        return true;
    }
    if(ch >= 0x0C3E && ch <= 0x0C40){
        return true;
    }
    if(ch >= 0x0C46 && ch <= 0x0C56){
        return true;
    }
    if(ch >= 0x0C62 && ch <= 0x0C63){
        return true;
    }
    if(ch >= 0x0CCC && ch <= 0x0CCD){
        return true;
    }
    if(ch >= 0x0CE2 && ch <= 0x0CE3){
        return true;
    }
    if(ch >= 0x0D00 && ch <= 0x0D01){
        return true;
    }
    if(ch >= 0x0D3B && ch <= 0x0D3C){
        return true;
    }
    if(ch >= 0x0D41 && ch <= 0x0D44){
        return true;
    }
    if(ch >= 0x0D62 && ch <= 0x0D63){
        return true;
    }
    if(ch >= 0x0DD2 && ch <= 0x0DD6){
        return true;
    }
    if(ch >= 0x0E34 && ch <= 0x0E3A){
        return true;
    }
    if(ch >= 0x0E47 && ch <= 0x0E4E){
        return true;
    }
    if(ch >= 0x0EB4 && ch <= 0x0EBC){
        return true;
    }
    if(ch >= 0x0EC8 && ch <= 0x0ECE){
        return true;
    }
    if(ch >= 0x0F18 && ch <= 0x0F19){
        return true;
    }
    if(ch >= 0x0F71 && ch <= 0x0F7E){
        return true;
    }
    if(ch >= 0x0F80 && ch <= 0x0F84){
        return true;
    }
    if(ch >= 0x0F86 && ch <= 0x0F87){
        return true;
    }
    if(ch >= 0x0F8D && ch <= 0x0FBC){
        return true;
    }
    if(ch >= 0x102D && ch <= 0x1030){
        return true;
    }
    if(ch >= 0x1032 && ch <= 0x1037){
        return true;
    }
    if(ch >= 0x1039 && ch <= 0x103A){
        return true;
    }
    if(ch >= 0x103D && ch <= 0x103E){
        return true;
    }
    if(ch >= 0x1058 && ch <= 0x1059){
        return true;
    }
    if(ch >= 0x105E && ch <= 0x1060){
        return true;
    }
    if(ch >= 0x1071 && ch <= 0x1074){
        return true;
    }
    if(ch >= 0x1085 && ch <= 0x1086){
        return true;
    }
    if(ch >= 0x135D && ch <= 0x135F){
        return true;
    }
    if(ch >= 0x1712 && ch <= 0x1714){
        return true;
    }
    if(ch >= 0x1732 && ch <= 0x1733){
        return true;
    }
    if(ch >= 0x1752 && ch <= 0x1753){
        return true;
    }
    if(ch >= 0x1772 && ch <= 0x1773){
        return true;
    }
    if(ch >= 0x17B4 && ch <= 0x17B5){
        return true;
    }
    if(ch >= 0x17B7 && ch <= 0x17BD){
        return true;
    }
    if(ch >= 0x17C9 && ch <= 0x17D3){
        return true;
    }
    if(ch >= 0x180B && ch <= 0x180D){
        return true;
    }
    if(ch >= 0x1885 && ch <= 0x1886){
        return true;
    }
    if(ch >= 0x1920 && ch <= 0x1922){
        return true;
    }
    if(ch >= 0x1927 && ch <= 0x1928){
        return true;
    }
    if(ch >= 0x1939 && ch <= 0x193B){
        return true;
    }
    if(ch >= 0x1A17 && ch <= 0x1A18){
        return true;
    }
    if(ch >= 0x1A58 && ch <= 0x1A60){
        return true;
    }
    if(ch >= 0x1A65 && ch <= 0x1A6C){
        return true;
    }
    if(ch >= 0x1A73 && ch <= 0x1A7F){
        return true;
    }
    if(ch >= 0x1AB0 && ch <= 0x1ABD){
        return true;
    }
    if(ch >= 0x1ABF && ch <= 0x1B03){
        return true;
    }
    if(ch >= 0x1B36 && ch <= 0x1B3A){
        return true;
    }
    if(ch >= 0x1B6B && ch <= 0x1B73){
        return true;
    }
    if(ch >= 0x1B80 && ch <= 0x1B81){
        return true;
    }
    if(ch >= 0x1BA2 && ch <= 0x1BA5){
        return true;
    }
    if(ch >= 0x1BA8 && ch <= 0x1BA9){
        return true;
    }
    if(ch >= 0x1BAB && ch <= 0x1BAD){
        return true;
    }
    if(ch >= 0x1BE8 && ch <= 0x1BE9){
        return true;
    }
    if(ch >= 0x1BEF && ch <= 0x1BF1){
        return true;
    }
    if(ch >= 0x1C2C && ch <= 0x1C33){
        return true;
    }
    if(ch >= 0x1C36 && ch <= 0x1C37){
        return true;
    }
    if(ch >= 0x1CD0 && ch <= 0x1CD2){
        return true;
    }
    if(ch >= 0x1CD4 && ch <= 0x1CE0){
        return true;
    }
    if(ch >= 0x1CE2 && ch <= 0x1CE8){
        return true;
    }
    if(ch >= 0x1CF8 && ch <= 0x1CF9){
        return true;
    }
    if(ch >= 0x1DC0 && ch <= 0x1DFF){
        return true;
    }
    if(ch >= 0x20D0 && ch <= 0x20DC){
        return true;
    }
    if(ch >= 0x20E5 && ch <= 0x20F0){
        return true;
    }
    if(ch >= 0x2CEF && ch <= 0x2CF1){
        return true;
    }
    if(ch >= 0x2DE0 && ch <= 0x2DFF){
        return true;
    }
    if(ch >= 0x302A && ch <= 0x302D){
        return true;
    }
    if(ch >= 0x3099 && ch <= 0x309A){
        return true;
    }
    if(ch >= 0xA674 && ch <= 0xA67D){
        return true;
    }
    if(ch >= 0xA69E && ch <= 0xA69F){
        return true;
    }
    if(ch >= 0xA6F0 && ch <= 0xA6F1){
        return true;
    }
    if(ch >= 0xA825 && ch <= 0xA826){
        return true;
    }
    if(ch >= 0xA8C4 && ch <= 0xA8C5){
        return true;
    }
    if(ch >= 0xA8E0 && ch <= 0xA8F1){
        return true;
    }
    if(ch >= 0xA926 && ch <= 0xA92D){
        return true;
    }
    if(ch >= 0xA947 && ch <= 0xA951){
        return true;
    }
    if(ch >= 0xA980 && ch <= 0xA982){
        return true;
    }
    if(ch >= 0xA9B6 && ch <= 0xA9B9){
        return true;
    }
    if(ch >= 0xA9BC && ch <= 0xA9BD){
        return true;
    }
    if(ch >= 0xAA29 && ch <= 0xAA2E){
        return true;
    }
    if(ch >= 0xAA31 && ch <= 0xAA32){
        return true;
    }
    if(ch >= 0xAA35 && ch <= 0xAA36){
        return true;
    }
    if(ch >= 0xAAB2 && ch <= 0xAAB4){
        return true;
    }
    if(ch >= 0xAAB7 && ch <= 0xAAB8){
        return true;
    }
    if(ch >= 0xAABE && ch <= 0xAABF){
        return true;
    }
    if(ch >= 0xAAEC && ch <= 0xAAED){
        return true;
    }
    if(ch >= 0xFE00 && ch <= 0xFE0F){
        return true;
    }
    if(ch >= 0xFE20 && ch <= 0xFE2F){
        return true;
    }
    if(ch >= 0x10376 && ch <= 0x1037A){
        return true;
    }
    if(ch >= 0x10A01 && ch <= 0x10A0F){
        return true;
    }
    if(ch >= 0x10A38 && ch <= 0x10A3F){
        return true;
    }
    if(ch >= 0x10AE5 && ch <= 0x10AE6){
        return true;
    }
    if(ch >= 0x10D24 && ch <= 0x10D27){
        return true;
    }
    if(ch >= 0x10EAB && ch <= 0x10EAC){
        return true;
    }
    if(ch >= 0x10EFD && ch <= 0x10EFF){
        return true;
    }
    if(ch >= 0x10F46 && ch <= 0x10F50){
        return true;
    }
    if(ch >= 0x10F82 && ch <= 0x10F85){
        return true;
    }
    if(ch >= 0x11038 && ch <= 0x11046){
        return true;
    }
    if(ch >= 0x11073 && ch <= 0x11074){
        return true;
    }
    if(ch >= 0x1107F && ch <= 0x11081){
        return true;
    }
    if(ch >= 0x110B3 && ch <= 0x110B6){
        return true;
    }
    if(ch >= 0x110B9 && ch <= 0x110BA){
        return true;
    }
    if(ch >= 0x11100 && ch <= 0x11102){
        return true;
    }
    if(ch >= 0x11127 && ch <= 0x1112B){
        return true;
    }
    if(ch >= 0x1112D && ch <= 0x11134){
        return true;
    }
    if(ch >= 0x11180 && ch <= 0x11181){
        return true;
    }
    if(ch >= 0x111B6 && ch <= 0x111BE){
        return true;
    }
    if(ch >= 0x111C9 && ch <= 0x111CC){
        return true;
    }
    if(ch >= 0x1122F && ch <= 0x11231){
        return true;
    }
    if(ch >= 0x11236 && ch <= 0x11237){
        return true;
    }
    if(ch >= 0x112E3 && ch <= 0x112EA){
        return true;
    }
    if(ch >= 0x11300 && ch <= 0x11301){
        return true;
    }
    if(ch >= 0x1133B && ch <= 0x1133C){
        return true;
    }
    if(ch >= 0x11366 && ch <= 0x11374){
        return true;
    }
    if(ch >= 0x11438 && ch <= 0x1143F){
        return true;
    }
    if(ch >= 0x11442 && ch <= 0x11444){
        return true;
    }
    if(ch >= 0x114B3 && ch <= 0x114B8){
        return true;
    }
    if(ch >= 0x114BF && ch <= 0x114C0){
        return true;
    }
    if(ch >= 0x114C2 && ch <= 0x114C3){
        return true;
    }
    if(ch >= 0x115B2 && ch <= 0x115B5){
        return true;
    }
    if(ch >= 0x115BC && ch <= 0x115BD){
        return true;
    }
    if(ch >= 0x115BF && ch <= 0x115C0){
        return true;
    }
    if(ch >= 0x115DC && ch <= 0x115DD){
        return true;
    }
    if(ch >= 0x11633 && ch <= 0x1163A){
        return true;
    }
    if(ch >= 0x1163F && ch <= 0x11640){
        return true;
    }
    if(ch >= 0x116B0 && ch <= 0x116B5){
        return true;
    }
    if(ch >= 0x1171D && ch <= 0x1171F){
        return true;
    }
    if(ch >= 0x11722 && ch <= 0x11725){
        return true;
    }
    if(ch >= 0x11727 && ch <= 0x1172B){
        return true;
    }
    if(ch >= 0x1182F && ch <= 0x11837){
        return true;
    }
    if(ch >= 0x11839 && ch <= 0x1183A){
        return true;
    }
    if(ch >= 0x1193B && ch <= 0x1193C){
        return true;
    }
    if(ch >= 0x119D4 && ch <= 0x119DB){
        return true;
    }
    if(ch >= 0x11A01 && ch <= 0x11A0A){
        return true;
    }
    if(ch >= 0x11A33 && ch <= 0x11A38){
        return true;
    }
    if(ch >= 0x11A3B && ch <= 0x11A3E){
        return true;
    }
    if(ch >= 0x11A51 && ch <= 0x11A56){
        return true;
    }
    if(ch >= 0x11A59 && ch <= 0x11A5B){
        return true;
    }
    if(ch >= 0x11A8A && ch <= 0x11A96){
        return true;
    }
    if(ch >= 0x11A98 && ch <= 0x11A99){
        return true;
    }
    if(ch >= 0x11C30 && ch <= 0x11C3D){
        return true;
    }
    if(ch >= 0x11C92 && ch <= 0x11CA7){
        return true;
    }
    if(ch >= 0x11CAA && ch <= 0x11CB0){
        return true;
    }
    if(ch >= 0x11CB2 && ch <= 0x11CB3){
        return true;
    }
    if(ch >= 0x11CB5 && ch <= 0x11CB6){
        return true;
    }
    if(ch >= 0x11D31 && ch <= 0x11D45){
        return true;
    }
    if(ch >= 0x11D90 && ch <= 0x11D91){
        return true;
    }
    if(ch >= 0x11EF3 && ch <= 0x11EF4){
        return true;
    }
    if(ch >= 0x11F00 && ch <= 0x11F01){
        return true;
    }
    if(ch >= 0x11F36 && ch <= 0x11F3A){
        return true;
    }
    if(ch >= 0x13447 && ch <= 0x13455){
        return true;
    }
    if(ch >= 0x16AF0 && ch <= 0x16AF4){
        return true;
    }
    if(ch >= 0x16B30 && ch <= 0x16B36){
        return true;
    }
    if(ch >= 0x16F8F && ch <= 0x16F92){
        return true;
    }
    if(ch >= 0x1BC9D && ch <= 0x1BC9E){
        return true;
    }
    if(ch >= 0x1CF00 && ch <= 0x1CF46){
        return true;
    }
    if(ch >= 0x1D167 && ch <= 0x1D169){
        return true;
    }
    if(ch >= 0x1D17B && ch <= 0x1D182){
        return true;
    }
    if(ch >= 0x1D185 && ch <= 0x1D18B){
        return true;
    }
    if(ch >= 0x1D1AA && ch <= 0x1D1AD){
        return true;
    }
    if(ch >= 0x1D242 && ch <= 0x1D244){
        return true;
    }
    if(ch >= 0x1DA00 && ch <= 0x1DA36){
        return true;
    }
    if(ch >= 0x1DA3B && ch <= 0x1DA6C){
        return true;
    }
    if(ch >= 0x1DA9B && ch <= 0x1DAAF){
        return true;
    }
    if(ch >= 0x1E000 && ch <= 0x1E02A){
        return true;
    }
    if(ch >= 0x1E130 && ch <= 0x1E136){
        return true;
    }
    if(ch >= 0x1E2EC && ch <= 0x1E2EF){
        return true;
    }
    if(ch >= 0x1E4EC && ch <= 0x1E4EF){
        return true;
    }
    if(ch >= 0x1E8D0 && ch <= 0x1E8D6){
        return true;
    }
    if(ch >= 0x1E944 && ch <= 0x1E94A){
        return true;
    }
    if(ch >= 0xE0100 && ch <= 0xE01EF){
        return true;
    }
    switch(ch){
        case 0x05BF:
        case 0x05C7:
        case 0x0670:
        case 0x0711:
        case 0x07FD:
        case 0x093A:
        case 0x093C:
        case 0x094D:
        case 0x0981:
        case 0x09BC:
        case 0x09CD:
        case 0x0A3C:
        case 0x0A75:
        case 0x0ABC:
        case 0x0ACD:
        case 0x0B3C:
        case 0x0B3F:
        case 0x0B82:
        case 0x0BC0:
        case 0x0BCD:
        case 0x0C00:
        case 0x0C04:
        case 0x0C3C:
        case 0x0C81:
        case 0x0CBC:
        case 0x0CBF:
        case 0x0CC6:
        case 0x0D4D:
        case 0x0D81:
        case 0x0DCA:
        case 0x0E31:
        case 0x0EB1:
        case 0x0F35:
        case 0x0F37:
        case 0x0F39:
        case 0x0FC6:
        case 0x1082:
        case 0x108D:
        case 0x109D:
        case 0x17C6:
        case 0x17DD:
        case 0x180F:
        case 0x18A9:
        case 0x1932:
        case 0x1A1B:
        case 0x1A56:
        case 0x1A62:
        case 0x1B34:
        case 0x1B3C:
        case 0x1B42:
        case 0x1BE6:
        case 0x1BED:
        case 0x1CED:
        case 0x1CF4:
        case 0x20E1:
        case 0x2D7F:
        case 0xA66F:
        case 0xA802:
        case 0xA806:
        case 0xA80B:
        case 0xA82C:
        case 0xA8FF:
        case 0xA9B3:
        case 0xA9E5:
        case 0xAA43:
        case 0xAA4C:
        case 0xAA7C:
        case 0xAAB0:
        case 0xAAC1:
        case 0xAAF6:
        case 0xABE5:
        case 0xABE8:
        case 0xABED:
        case 0xFB1E:
        case 0x101FD:
        case 0x102E0:
        case 0x11001:
        case 0x11070:
        case 0x110C2:
        case 0x11173:
        case 0x111CF:
        case 0x11234:
        case 0x1123E:
        case 0x11241:
        case 0x112DF:
        case 0x11340:
        case 0x11446:
        case 0x1145E:
        case 0x114BA:
        case 0x1163D:
        case 0x116AB:
        case 0x116AD:
        case 0x116B7:
        case 0x1193E:
        case 0x11943:
        case 0x119E0:
        case 0x11A47:
        case 0x11C3F:
        case 0x11D47:
        case 0x11D95:
        case 0x11D97:
        case 0x11F40:
        case 0x11F42:
        case 0x13440:
        case 0x16F4F:
        case 0x16FE4:
        case 0x1DA75:
        case 0x1DA84:
        case 0x1E08F:
        case 0x1E2AE:
            return true;
    }
    return false;
}

bool uchar_is_Me_category(UChar ch)
{
    if(ch >= 0x0488 && ch <= 0x0489){
        return true;
    }
    if(ch >= 0x20DD && ch <= 0x20E0){
        return true;
    }
    if(ch >= 0x20E2 && ch <= 0x20E4){
        return true;
    }
    if(ch >= 0xA670 && ch <= 0xA672){
        return true;
    }
    switch(ch){
        case 0x1ABE:
            return true;
    }
    return false;
}

bool uchar_is_Mc_category(UChar ch)
{
    if(ch >= 0x093E && ch <= 0x0940){
        return true;
    }
    if(ch >= 0x0949 && ch <= 0x094C){
        return true;
    }
    if(ch >= 0x094E && ch <= 0x094F){
        return true;
    }
    if(ch >= 0x0982 && ch <= 0x0983){
        return true;
    }
    if(ch >= 0x09BE && ch <= 0x09C0){
        return true;
    }
    if(ch >= 0x09C7 && ch <= 0x09CC){
        return true;
    }
    if(ch >= 0x0A3E && ch <= 0x0A40){
        return true;
    }
    if(ch >= 0x0ABE && ch <= 0x0AC0){
        return true;
    }
    if(ch >= 0x0AC9 && ch <= 0x0ACC){
        return true;
    }
    if(ch >= 0x0B02 && ch <= 0x0B03){
        return true;
    }
    if(ch >= 0x0B47 && ch <= 0x0B4C){
        return true;
    }
    if(ch >= 0x0BBE && ch <= 0x0BBF){
        return true;
    }
    if(ch >= 0x0BC1 && ch <= 0x0BCC){
        return true;
    }
    if(ch >= 0x0C01 && ch <= 0x0C03){
        return true;
    }
    if(ch >= 0x0C41 && ch <= 0x0C44){
        return true;
    }
    if(ch >= 0x0C82 && ch <= 0x0C83){
        return true;
    }
    if(ch >= 0x0CC0 && ch <= 0x0CC4){
        return true;
    }
    if(ch >= 0x0CC7 && ch <= 0x0CCB){
        return true;
    }
    if(ch >= 0x0CD5 && ch <= 0x0CD6){
        return true;
    }
    if(ch >= 0x0D02 && ch <= 0x0D03){
        return true;
    }
    if(ch >= 0x0D3E && ch <= 0x0D40){
        return true;
    }
    if(ch >= 0x0D46 && ch <= 0x0D4C){
        return true;
    }
    if(ch >= 0x0D82 && ch <= 0x0D83){
        return true;
    }
    if(ch >= 0x0DCF && ch <= 0x0DD1){
        return true;
    }
    if(ch >= 0x0DD8 && ch <= 0x0DDF){
        return true;
    }
    if(ch >= 0x0DF2 && ch <= 0x0DF3){
        return true;
    }
    if(ch >= 0x0F3E && ch <= 0x0F3F){
        return true;
    }
    if(ch >= 0x102B && ch <= 0x102C){
        return true;
    }
    if(ch >= 0x103B && ch <= 0x103C){
        return true;
    }
    if(ch >= 0x1056 && ch <= 0x1057){
        return true;
    }
    if(ch >= 0x1062 && ch <= 0x1064){
        return true;
    }
    if(ch >= 0x1067 && ch <= 0x106D){
        return true;
    }
    if(ch >= 0x1083 && ch <= 0x1084){
        return true;
    }
    if(ch >= 0x1087 && ch <= 0x108C){
        return true;
    }
    if(ch >= 0x109A && ch <= 0x109C){
        return true;
    }
    if(ch >= 0x17BE && ch <= 0x17C5){
        return true;
    }
    if(ch >= 0x17C7 && ch <= 0x17C8){
        return true;
    }
    if(ch >= 0x1923 && ch <= 0x1926){
        return true;
    }
    if(ch >= 0x1929 && ch <= 0x1931){
        return true;
    }
    if(ch >= 0x1933 && ch <= 0x1938){
        return true;
    }
    if(ch >= 0x1A19 && ch <= 0x1A1A){
        return true;
    }
    if(ch >= 0x1A63 && ch <= 0x1A64){
        return true;
    }
    if(ch >= 0x1A6D && ch <= 0x1A72){
        return true;
    }
    if(ch >= 0x1B3D && ch <= 0x1B41){
        return true;
    }
    if(ch >= 0x1B43 && ch <= 0x1B44){
        return true;
    }
    if(ch >= 0x1BA6 && ch <= 0x1BA7){
        return true;
    }
    if(ch >= 0x1BEA && ch <= 0x1BEC){
        return true;
    }
    if(ch >= 0x1BF2 && ch <= 0x1BF3){
        return true;
    }
    if(ch >= 0x1C24 && ch <= 0x1C2B){
        return true;
    }
    if(ch >= 0x1C34 && ch <= 0x1C35){
        return true;
    }
    if(ch >= 0x302E && ch <= 0x302F){
        return true;
    }
    if(ch >= 0xA823 && ch <= 0xA824){
        return true;
    }
    if(ch >= 0xA880 && ch <= 0xA881){
        return true;
    }
    if(ch >= 0xA8B4 && ch <= 0xA8C3){
        return true;
    }
    if(ch >= 0xA952 && ch <= 0xA953){
        return true;
    }
    if(ch >= 0xA9B4 && ch <= 0xA9B5){
        return true;
    }
    if(ch >= 0xA9BA && ch <= 0xA9BB){
        return true;
    }
    if(ch >= 0xA9BE && ch <= 0xA9C0){
        return true;
    }
    if(ch >= 0xAA2F && ch <= 0xAA30){
        return true;
    }
    if(ch >= 0xAA33 && ch <= 0xAA34){
        return true;
    }
    if(ch >= 0xAAEE && ch <= 0xAAEF){
        return true;
    }
    if(ch >= 0xABE3 && ch <= 0xABE4){
        return true;
    }
    if(ch >= 0xABE6 && ch <= 0xABE7){
        return true;
    }
    if(ch >= 0xABE9 && ch <= 0xABEA){
        return true;
    }
    if(ch >= 0x110B0 && ch <= 0x110B2){
        return true;
    }
    if(ch >= 0x110B7 && ch <= 0x110B8){
        return true;
    }
    if(ch >= 0x11145 && ch <= 0x11146){
        return true;
    }
    if(ch >= 0x111B3 && ch <= 0x111B5){
        return true;
    }
    if(ch >= 0x111BF && ch <= 0x111C0){
        return true;
    }
    if(ch >= 0x1122C && ch <= 0x1122E){
        return true;
    }
    if(ch >= 0x11232 && ch <= 0x11233){
        return true;
    }
    if(ch >= 0x112E0 && ch <= 0x112E2){
        return true;
    }
    if(ch >= 0x11302 && ch <= 0x11303){
        return true;
    }
    if(ch >= 0x1133E && ch <= 0x1133F){
        return true;
    }
    if(ch >= 0x11341 && ch <= 0x1134D){
        return true;
    }
    if(ch >= 0x11362 && ch <= 0x11363){
        return true;
    }
    if(ch >= 0x11435 && ch <= 0x11437){
        return true;
    }
    if(ch >= 0x11440 && ch <= 0x11441){
        return true;
    }
    if(ch >= 0x114B0 && ch <= 0x114B2){
        return true;
    }
    if(ch >= 0x114BB && ch <= 0x114BE){
        return true;
    }
    if(ch >= 0x115AF && ch <= 0x115B1){
        return true;
    }
    if(ch >= 0x115B8 && ch <= 0x115BB){
        return true;
    }
    if(ch >= 0x11630 && ch <= 0x11632){
        return true;
    }
    if(ch >= 0x1163B && ch <= 0x1163C){
        return true;
    }
    if(ch >= 0x116AE && ch <= 0x116AF){
        return true;
    }
    if(ch >= 0x11720 && ch <= 0x11721){
        return true;
    }
    if(ch >= 0x1182C && ch <= 0x1182E){
        return true;
    }
    if(ch >= 0x11930 && ch <= 0x11938){
        return true;
    }
    if(ch >= 0x119D1 && ch <= 0x119D3){
        return true;
    }
    if(ch >= 0x119DC && ch <= 0x119DF){
        return true;
    }
    if(ch >= 0x11A57 && ch <= 0x11A58){
        return true;
    }
    if(ch >= 0x11D8A && ch <= 0x11D8E){
        return true;
    }
    if(ch >= 0x11D93 && ch <= 0x11D94){
        return true;
    }
    if(ch >= 0x11EF5 && ch <= 0x11EF6){
        return true;
    }
    if(ch >= 0x11F34 && ch <= 0x11F35){
        return true;
    }
    if(ch >= 0x11F3E && ch <= 0x11F3F){
        return true;
    }
    if(ch >= 0x16F51 && ch <= 0x16F87){
        return true;
    }
    if(ch >= 0x16FF0 && ch <= 0x16FF1){
        return true;
    }
    if(ch >= 0x1D165 && ch <= 0x1D166){
        return true;
    }
    if(ch >= 0x1D16D && ch <= 0x1D172){
        return true;
    }
    switch(ch){
        case 0x0903:
        case 0x093B:
        case 0x09D7:
        case 0x0A03:
        case 0x0A83:
        case 0x0B3E:
        case 0x0B40:
        case 0x0B57:
        case 0x0BD7:
        case 0x0CBE:
        case 0x0CF3:
        case 0x0D57:
        case 0x0F7F:
        case 0x1031:
        case 0x1038:
        case 0x108F:
        case 0x1715:
        case 0x1734:
        case 0x17B6:
        case 0x1A55:
        case 0x1A57:
        case 0x1A61:
        case 0x1B04:
        case 0x1B35:
        case 0x1B3B:
        case 0x1B82:
        case 0x1BA1:
        case 0x1BAA:
        case 0x1BE7:
        case 0x1BEE:
        case 0x1CE1:
        case 0x1CF7:
        case 0xA827:
        case 0xA983:
        case 0xAA4D:
        case 0xAA7B:
        case 0xAA7D:
        case 0xAAEB:
        case 0xAAF5:
        case 0xABEC:
        case 0x11000:
        case 0x11002:
        case 0x11082:
        case 0x1112C:
        case 0x11182:
        case 0x111CE:
        case 0x11235:
        case 0x11357:
        case 0x11445:
        case 0x114B9:
        case 0x114C1:
        case 0x115BE:
        case 0x1163E:
        case 0x116AC:
        case 0x116B6:
        case 0x11726:
        case 0x11838:
        case 0x1193D:
        case 0x11940:
        case 0x11942:
        case 0x119E4:
        case 0x11A39:
        case 0x11A97:
        case 0x11C2F:
        case 0x11C3E:
        case 0x11CA9:
        case 0x11CB1:
        case 0x11CB4:
        case 0x11D96:
        case 0x11F03:
        case 0x11F41:
            return true;
    }
    return false;
}

bool uchar_is_Nl_category(UChar ch)
{
    if(ch >= 0x16EE && ch <= 0x16F0){
        return true;
    }
    if(ch >= 0x2160 && ch <= 0x2182){
        return true;
    }
    if(ch >= 0x2185 && ch <= 0x2188){
        return true;
    }
    if(ch >= 0x3021 && ch <= 0x3029){
        return true;
    }
    if(ch >= 0x3038 && ch <= 0x303A){
        return true;
    }
    if(ch >= 0xA6E6 && ch <= 0xA6EF){
        return true;
    }
    if(ch >= 0x10140 && ch <= 0x10174){
        return true;
    }
    if(ch >= 0x103D1 && ch <= 0x103D5){
        return true;
    }
    if(ch >= 0x12400 && ch <= 0x1246E){
        return true;
    }
    switch(ch){
        case 0x3007:
        case 0x10341:
        case 0x1034A:
            return true;
    }
    return false;
}

bool uchar_is_Zl_category(UChar ch)
{
    switch(ch){
        case 0x2028:
            return true;
    }
    return false;
}

bool uchar_is_Zp_category(UChar ch)
{
    switch(ch){
        case 0x2029:
            return true;
    }
    return false;
}

bool uchar_is_Cs_category(UChar ch)
{
    if(ch >= 0xD800 && ch <= 0xDFFF){
        return true;
    }
    return false;
}

bool uchar_is_Co_category(UChar ch)
{
    if(ch >= 0xE000 && ch <= 0xF8FF){
        return true;
    }
    if(ch >= 0xF0000 && ch <= 0x10FFFD){
        return true;
    }
    return false;
}

bool uchar_is_category(UChar character, UnicodeCategory category) {
    switch (category) {
        case LL:
            if(uchar_is_Ll_category(character))
            {
                return true;
            }
        case LU:
            if(uchar_is_Lu_category(character))
            {
                return true;
            }
        case LT:
            if(uchar_is_Lt_category(character))
            {
                return true;
            }
        case LM:
            if(uchar_is_Lm_category(character))
            {
                return true;
            }
        case LO:
            if(uchar_is_Lo_category(character))
            {
                return true;
            }
        case MN:
            if(uchar_is_Mn_category(character))
            {
                return true;
            }
        case MC:
            if(uchar_is_Mc_category(character))
            {
                return true;
            }
        case ME:
            if(uchar_is_Me_category(character))
            {
                return true;
            }
        case ND:
            if(uchar_is_Nd_category(character))
            {
                return true;
            }
        case NL:
            if(uchar_is_Nl_category(character))
            {
                return true;
            }
        case NO:
            if(uchar_is_No_category(character))
            {
                return true;
            }
        case PC:
            if(uchar_is_Pc_category(character))
            {
                return true;
            }
        case PD:
            if(uchar_is_Pd_category(character))
            {
                return true;
            }
        case PS:
            if(uchar_is_Ps_category(character))
            {
                return true;
            }
        case PE:
            if(uchar_is_Pe_category(character))
            {
                return true;
            }
        case PI:
            if(uchar_is_Pi_category(character))
            {
                return true;
            }
        case PF:
            if(uchar_is_Pf_category(character))
            {
                return true;
            }
        case PO:
            if(uchar_is_Po_category(character))
            {
                return true;
            }
        case SM:
            if(uchar_is_Sm_category(character))
            {
                return true;
            }
        case SC:
            if(uchar_is_Sc_category(character))
            {
                return true;
            }
        case SK:
            if(uchar_is_Sk_category(character))
            {
                return true;
            }
        case SO:
            if(uchar_is_So_category(character))
            {
                return true;
            }
        case ZS:
            if(uchar_is_Zs_category(character))
            {
                return true;
            }
        case ZL:
            if(uchar_is_Zl_category(character))
            {
                return true;
            }
        case ZP:
            if(uchar_is_Zp_category(character))
            {
                return true;
            }
        case CC:
            if(uchar_is_Cc_category(character))
            {
                return true;
            }
        case CF:
            if(uchar_is_Cf_category(character))
            {
                return true;
            }
        case CS:
            if(uchar_is_Cs_category(character))
            {
                return true;
            }
        case CO:
            if(uchar_is_Co_category(character))
            {
                return true;
            }
    }
    return false;
}

bool uchar_is_whitespace(UChar character) {
    switch (character) {
        case 0x0009:
        case 0x000B:
        case 0x000C:
            return true;
    }
    return uchar_is_Zs_category(character);
}

bool uchar_is_newline(UChar character) {
    switch (character) {
        case '\r\n':
        case '\r':
        case '\n':
        case 0x0085:
        case 0x2028:
        case 0x2029:
            return true;
    }
    return false;
}

bool uchar_is_letter(UChar character) {
    return uchar_is_Ll_category(character) || uchar_is_Lu_category(character) || uchar_is_Lm_category(character) ||
            uchar_is_Lo_category(character) || uchar_is_Lt_category(character) || uchar_is_Nl_category(character);
}

bool uchar_is_decimal(UChar character) {
    return uchar_is_Nd_category(character);
}
