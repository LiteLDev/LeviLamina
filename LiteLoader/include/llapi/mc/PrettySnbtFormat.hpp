#pragma once
#include "../Global.h"
#include "Tag.hpp"

struct PrettySnbtFormat
{
protected:
    struct ValueFormat
    {
        std::string mPrefix;
        std::string mSuffix;
        LIAPI void toPlayerFormat();
        LIAPI void toConsoleFormat();
    };

    bool mForPlayer = false;
    unsigned int mMaxLevel = (unsigned int)-1;
    std::array<bool, 12> mExpandInList;
    bool mExpandCompound = true;
    std::array<ValueFormat, 12> mValueFormats;
    ValueFormat mKeyFormat = {"\"", "\""};
    std::string mIndent = "    ";
    std::string mSeparator = ",";
    std::string mColon = ":";
    LIAPI bool setStringColor(std::string& in, mce::Color const& color);
    LIAPI void setDefaultColor();

    template <typename T>
    friend void __appendPrettySNBT(std::ostringstream& oss, T&, unsigned int level, PrettySnbtFormat const& format) = delete;
    friend void __appendPrettySpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format);
    friend void __appendPrettyReturnSpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format);
    template <typename type>
    friend void __appendPrettyList(std::ostringstream& oss, ListTag& tag, unsigned int level, PrettySnbtFormat const& format, Tag::Type childrenType);

public:
    LIAPI PrettySnbtFormat();
    LIAPI std::string getColorCode(mce::Color const& color) const;
    LIAPI std::string getResetColorCode() const;
    LIAPI std::string getItalicCode() const;

    template <Tag::Type type>
    LIAPI bool setValueColor(mce::Color const& color);
    template <Tag::Type type>
    LIAPI bool setValueFormat(std::string const& prefix, std::string const& suffix);
    template <Tag::Type type>
    LIAPI bool setExpand(bool expand);

    LIAPI bool setKeyColor(mce::Color const& color);
    LIAPI bool isPlayerFormat() const;
    LIAPI bool setColonColor(mce::Color const& color);
    LIAPI bool setSeparatorColor(mce::Color const& color);
    LIAPI bool setIndent(int indent);

    LIAPI void switchToPlayerFormat();
    LIAPI void switchToConsoleFormat();

    LIAPI static PrettySnbtFormat const& getDefaultFormat(bool forPlayer);
};