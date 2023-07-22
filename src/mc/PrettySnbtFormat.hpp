#pragma once
#include "liteloader/api/Global.h"
#include "Tag.hpp"

struct PrettySnbtFormat
{
protected:
    struct ValueFormat
    {
        std::string mPrefix;
        std::string mSuffix;
        LLAPI void toPlayerFormat();
        LLAPI void toConsoleFormat();
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
    LLAPI bool setStringColor(std::string& in, mce::Color const& color);
    LLAPI void setDefaultColor();

    template <typename T>
    friend void __appendPrettySNBT(std::ostringstream& oss, T&, unsigned int level, PrettySnbtFormat const& format) = delete;
    friend void __appendPrettySpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format);
    friend void __appendPrettyReturnSpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format);
    template <typename type>
    friend void __appendPrettyList(std::ostringstream& oss, ListTag& tag, unsigned int level, PrettySnbtFormat const& format, Tag::Type childrenType);

public:
    LLAPI PrettySnbtFormat();
    LLAPI std::string getColorCode(mce::Color const& color) const;
    LLAPI std::string getResetColorCode() const;
    LLAPI std::string getItalicCode() const;

    template <Tag::Type type>
    LLAPI bool setValueColor(mce::Color const& color);
    template <Tag::Type type>
    LLAPI bool setValueFormat(std::string const& prefix, std::string const& suffix);
    template <Tag::Type type>
    LLAPI bool setExpand(bool expand);

    LLAPI bool setKeyColor(mce::Color const& color);
    LLAPI bool isPlayerFormat() const;
    LLAPI bool setColonColor(mce::Color const& color);
    LLAPI bool setSeparatorColor(mce::Color const& color);
    LLAPI bool setIndent(int indent);

    LLAPI void switchToPlayerFormat();
    LLAPI void switchToConsoleFormat();

    LLAPI static PrettySnbtFormat const& getDefaultFormat(bool forPlayer);
};