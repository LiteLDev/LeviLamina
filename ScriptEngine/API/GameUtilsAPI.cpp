#include "APIHelp.h"
#include "GameUtilsAPI.h"

using namespace std;
// clang-format off
ClassDefine<void> TextClassBuilder =
    defineClass("Format")
        .property("Black",		[]() { return String::newString("§0"); })
        .property("DarkBlue",	[]() { return String::newString("§1"); })
        .property("DarkGreen",	[]() { return String::newString("§2"); })
        .property("DarkAqua",	[]() { return String::newString("§3"); })
        .property("DarkRed",	[]() { return String::newString("§4"); })
        .property("DarkPurple", []() { return String::newString("§5"); })
        .property("Gold",		[]() { return String::newString("§6"); })
        .property("Gray",		[]() { return String::newString("§7"); })
        .property("DarkGray",	[]() { return String::newString("§8"); })
        .property("Blue",		[]() { return String::newString("§9"); })
        .property("Green",		[]() { return String::newString("§a"); })
        .property("Aqua",		[]() { return String::newString("§b"); })
        .property("Red",		[]() { return String::newString("§c"); })
        .property("LightPurple", []() { return String::newString("§d"); })
        .property("Yellow",		[]() { return String::newString("§e"); })
        .property("White",		[]() { return String::newString("§f"); })
        .property("MinecoinGold", []() { return String::newString("§g"); })
        .property("Bold",		[]() { return String::newString("§l"); })
        .property("Italics",	[]() { return String::newString("§o"); })
        .property("Underline",	[]() { return String::newString("§n"); })
        .property("StrikeThrough", []() { return String::newString("§m"); })
        .property("Random",		[]() { return String::newString("§k"); })
        .property("Clear",		[]() { return String::newString("§r"); })
        .build();
// clang-format on