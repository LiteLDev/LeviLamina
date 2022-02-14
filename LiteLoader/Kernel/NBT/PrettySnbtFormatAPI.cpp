#include <MC/PrettySnbtFormat.hpp>
#include <MC/ColorFormat.hpp>

#define ForEachTagType(op)    \
    op(Tag::Type::End);       \
    op(Tag::Type::Byte);      \
    op(Tag::Type::Short);     \
    op(Tag::Type::Int);       \
    op(Tag::Type::Int64);     \
    op(Tag::Type::Float);     \
    op(Tag::Type::Double);    \
    op(Tag::Type::ByteArray); \
    op(Tag::Type::String);    \
    op(Tag::Type::List);      \
    op(Tag::Type::Compound);  \
    op(Tag::Type::IntArray);
namespace
{
template <Tag::Type T>
std::string const& DefaultSuffix;
template <Tag::Type T>
std::string const& DefaultPrefix = "";
template <>
std::string const& DefaultSuffix<Tag::Type::End> = "";
template <>
std::string const& DefaultSuffix<Tag::Type::Byte> = "b";
template <>
std::string const& DefaultSuffix<Tag::Type::Short> = "s";
template <>
std::string const& DefaultSuffix<Tag::Type::Int> = "";
template <>
std::string const& DefaultSuffix<Tag::Type::Int64> = "L";
template <>
std::string const& DefaultSuffix<Tag::Type::Float> = "f";
template <>
std::string const& DefaultSuffix<Tag::Type::Double> = "d";
template <>
std::string const& DefaultPrefix<Tag::Type::ByteArray> = "[b;";
template <>
std::string const& DefaultSuffix<Tag::Type::ByteArray> = "]";
template <>
std::string const& DefaultPrefix<Tag::Type::String> = "\"";
template <>
std::string const& DefaultSuffix<Tag::Type::String> = "\"";
template <>
std::string const& DefaultPrefix<Tag::Type::List> = "[";
template <>
std::string const& DefaultSuffix<Tag::Type::List> = "]";
template <>
std::string const& DefaultPrefix<Tag::Type::Compound> = "{";
template <>
std::string const& DefaultSuffix<Tag::Type::Compound> = "}";
template <>
std::string const& DefaultPrefix<Tag::Type::IntArray> = "[I;";
template <>
std::string const& DefaultSuffix<Tag::Type::IntArray> = "]";
} // namespace

inline void PrettySnbtFormat::ValueFormat::toPlayerFormat()
{
    ColorFormat::transferConsoleColorToColorCode(mPrefix);
    ColorFormat::transferConsoleColorToColorCode(mSuffix);
}
inline void PrettySnbtFormat::ValueFormat::toConsoleFormat()
{
    ColorFormat::transferColorCodeToConsole(mPrefix);
    ColorFormat::transferColorCodeToConsole(mSuffix);
}
PrettySnbtFormat::PrettySnbtFormat()
{
#define InitFormat(type) mValueFormats[type] = {DefaultPrefix<type>, DefaultSuffix<type>};
    ForEachTagType(InitFormat);
    mExpandInList[Tag::Type::End] = false;
    mExpandInList[Tag::Type::Byte] = false;
    mExpandInList[Tag::Type::Short] = false;
    mExpandInList[Tag::Type::Int] = false;
    mExpandInList[Tag::Type::Int64] = false;
    mExpandInList[Tag::Type::Float] = false;
    mExpandInList[Tag::Type::Double] = false;
    mExpandInList[Tag::Type::ByteArray] = true;
    mExpandInList[Tag::Type::String] = true;
    mExpandInList[Tag::Type::List] = true;
    mExpandInList[Tag::Type::Compound] = true;
    mExpandInList[Tag::Type::IntArray] = true;
#undef InitFormat
}
template <Tag::Type type>
inline bool PrettySnbtFormat::setValueColor(mce::Color const& color)
{
    if constexpr (type == Tag::Type::String)
        mValueFormats[type] = {getColorCode(color) + DefaultPrefix<type>, DefaultSuffix<type> + getResetColorCode()};
    else if constexpr (type >= Tag::Type::ByteArray)
        mValueFormats[type] = {getColorCode(color) + DefaultPrefix<type> + getResetColorCode(), getColorCode(color) + DefaultSuffix<type> + getResetColorCode()};
    else
        mValueFormats[type] = {getColorCode(color) + DefaultPrefix<type>, getItalicCode() + DefaultSuffix<type> + getResetColorCode()};
    return true;
}

template <Tag::Type type>
inline bool PrettySnbtFormat::setValueFormat(std::string const& prefix, std::string const& suffix)
{
    mValueFormats[type] = {prefix, suffix};
    return true;
}

template <Tag::Type type>
inline bool PrettySnbtFormat::setExpand(bool expand)
{
    mExpandInList[type] = expand;
    return true;
}

#define DllExport_SetValueColor(type) \
    template LIAPI bool PrettySnbtFormat::setValueColor<type>(mce::Color const& color)
#define DllExport_SetValueFormat(type) \
    template LIAPI bool PrettySnbtFormat::setValueFormat<type>(std::string const& prefix, std::string const& suffix)
#define DllExport_SetExpand(type) \
    template LIAPI bool PrettySnbtFormat::setExpand<type>(bool expand)

ForEachTagType(DllExport_SetValueColor);
ForEachTagType(DllExport_SetValueFormat);
ForEachTagType(DllExport_SetExpand);

inline bool PrettySnbtFormat::setStringColor(std::string& in, mce::Color const& color)
{
    in.insert(0, getColorCode(color));
    in.append(getResetColorCode());
    return true;
}

inline std::string PrettySnbtFormat::getColorCode(mce::Color const& color) const
{
    if (mForPlayer)
        return color.toNearestColorCode();
    else
        return color.toConsoleCode();
}

inline std::string PrettySnbtFormat::getResetColorCode() const
{
    return mForPlayer ? "§r" : "\x1b[0m";
}

inline std::string PrettySnbtFormat::getItalicCode() const
{
    return mForPlayer ? "§o" : "\x1b[3m";
}

inline bool PrettySnbtFormat::setKeyColor(mce::Color const& color)
{
    mKeyFormat = {getColorCode(color) + "\"", "\"" + getResetColorCode()};
    return true;
}

inline bool PrettySnbtFormat::isPlayerFormat() const
{
    return mForPlayer;
}

void PrettySnbtFormat::switchToPlayerFormat()
{
    if (mForPlayer)
        return;
    ColorFormat::transferConsoleColorToColorCode(mIndent);
    ColorFormat::transferConsoleColorToColorCode(mSeparator);
    ColorFormat::transferConsoleColorToColorCode(mColon);
    mKeyFormat.toPlayerFormat();
    for (auto& format : mValueFormats)
    {
        format.toPlayerFormat();
    }
}

void PrettySnbtFormat::switchToConsoleFormat()
{
    if (!mForPlayer)
        return;
    ColorFormat::transferColorCodeToConsole(mIndent);
    ColorFormat::transferColorCodeToConsole(mSeparator);
    ColorFormat::transferColorCodeToConsole(mColon);
    mKeyFormat.toConsoleFormat();
    for (auto& format : mValueFormats)
    {
        format.toConsoleFormat();
    }
}

inline bool PrettySnbtFormat::setColonColor(mce::Color const& color)
{
    return setStringColor(mColon, color);
}

inline bool PrettySnbtFormat::setSeparatorColor(mce::Color const& color)
{
    return setStringColor(mSeparator, color);
}

inline bool PrettySnbtFormat::setIndent(int indent)
{
    mIndent.clear();
    mIndent.resize(indent, ' ');
    return true;
}

void PrettySnbtFormat::setDefaultColor()
{
    setKeyColor(ColorFormat::colorCodeToColorMap.at("§b"));

    setValueColor<Tag::Type::Int>(ColorFormat::colorCodeToColorMap.at("§e"));
    setValueColor<Tag::Type::Short>(ColorFormat::colorCodeToColorMap.at("§e"));
    setValueColor<Tag::Type::Byte>(ColorFormat::colorCodeToColorMap.at("§e"));
    setValueColor<Tag::Type::Int64>(ColorFormat::colorCodeToColorMap.at("§e"));

    setValueColor<Tag::Type::Float>(ColorFormat::colorCodeToColorMap.at("§c"));
    setValueColor<Tag::Type::Double>(ColorFormat::colorCodeToColorMap.at("§c"));

    setValueColor<Tag::Type::String>(ColorFormat::colorCodeToColorMap.at("§a"));

    setValueColor<Tag::Type::List>(ColorFormat::colorCodeToColorMap.at("§d"));
    setValueColor<Tag::Type::Compound>(ColorFormat::colorCodeToColorMap.at("§d"));
    setValueColor<Tag::Type::ByteArray>(ColorFormat::colorCodeToColorMap.at("§d"));
    setValueColor<Tag::Type::IntArray>(ColorFormat::colorCodeToColorMap.at("§d"));
}

PrettySnbtFormat const& PrettySnbtFormat::getDefaultFormat(bool forPlayer)
{
    if (forPlayer)
    {
        static PrettySnbtFormat const consoleFormat = ([]() -> PrettySnbtFormat {
            PrettySnbtFormat format;
            format.mForPlayer = true;
            format.mIndent = " ";
            format.mMaxLevel = 2;
            format.setDefaultColor();
            return format;
        })();
        return consoleFormat;
    }
    else
    {
        static PrettySnbtFormat const playerFormat = ([]() -> PrettySnbtFormat {
            PrettySnbtFormat format;
            format.mForPlayer = false;
            format.setDefaultColor();
            return format;
        })();
        return playerFormat;
    }
};
