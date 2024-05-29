#include "ll/api/Logger.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/StringUtils.h"
#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/nbt/CompoundTag.h"

#include "nlohmann/json.hpp"

namespace ll::nbt::detail {
bool isTrivialNbtStringChar(char c);
}

namespace {

namespace cf = ColorFormat;

const std::string base64Id = " /*BASE64*/";

template <std::integral T>
std::string getString(T value) {
    return fmt::format("{}", value);
}

template <std::floating_point T>
std::string getString(T value) {
    if (std::round(value) == value) {
        return fmt::format("{:.1f}", value);
    }
    return fmt::format("{}", value);
}

bool isMinimize(SnbtFormat format) {
    return !(
        static_cast<bool>(format & SnbtFormat::CompoundLineFeed)
        || static_cast<bool>(format & SnbtFormat::ArrayLineFeed)
    );
}

std::string WrapColorCode(std::string const& str, std::string const& code) { return code + str + cf::RESET; }

std::string
toDumpString(std::string const& str, fmt::color defaultc, std::string const& defaultmc, SnbtFormat format, bool key) {

    std::string res;

    bool base64 = false;
    if (str.empty()) {
        res = "\"\"";
    } else {
        bool isTrivial = true;
        if (!static_cast<bool>(format & SnbtFormat::ForceQuote)) {
            if (!key && (str[0] == '-' || isdigit(str[0]))) {
                isTrivial = false;
            } else {
                for (auto c : str) {
                    if (!ll::nbt::detail::isTrivialNbtStringChar(c)) {
                        isTrivial = false;
                        break;
                    }
                }
            }
        } else {
            isTrivial = false;
        }
        if (isTrivial) {
            res = str;
        } else {
            try {
                res = nlohmann::json{str}.dump(
                    -1,
                    ' ',
                    (bool)(format & SnbtFormat::ForceAscii),
                    nlohmann::json::error_handler_t::strict
                );
                res = res.substr(1, res.size() - 2);
            } catch (...) {
                base64 = true;
                res    = "\"" + ll::base64_utils::encode(str) + "\"";
            }
        }
    }

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            res = ll::string_utils::applyTextStyle(fmt::fg(defaultc), res);
            if (base64) {
                res += ll::string_utils::applyTextStyle(fmt::fg(fmt::color::olive_drab), base64Id);
            }
        } else {
            res = WrapColorCode(res, defaultmc);
            if (base64) {
                res += WrapColorCode(base64Id, cf::MATERIAL_EMERALD);
            }
        }
    } else {
        if (base64) {
            res += base64Id;
        }
    }
    return res;
}

std::string toDumpNumber(std::string str, SnbtFormat format) {
    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            str = ll::string_utils::applyTextStyle(fmt::fg(fmt::color::pale_green), str);
        } else {
            str = WrapColorCode(str, cf::GREEN);
        }
    }
    return str;
}
} // namespace

namespace ll::nbt::detail {
std::string TypedToSnbt(EndTag const&, uchar, SnbtFormat format) {
    std::string res = "null";

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            res = ll::string_utils::applyTextStyle(fmt::fg(fmt::color::royal_blue), res);
        } else {
            res = WrapColorCode(res, cf::BLUE);
        }
    }
    return res;
}
std::string TypedToSnbt(ByteTag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(
        getString(self.data) + (static_cast<bool>(format & SnbtFormat::CommentMarks) ? " /*b*/" : "b"),
        format
    );
}
std::string TypedToSnbt(ShortTag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(
        getString(self.data) + (static_cast<bool>(format & SnbtFormat::CommentMarks) ? " /*s*/" : "s"),
        format
    );
}
std::string TypedToSnbt(IntTag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data), format);
}

std::string TypedToSnbt(Int64Tag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(
        getString(self.data) + (static_cast<bool>(format & SnbtFormat::CommentMarks) ? " /*l*/" : "l"),
        format
    );
}
std::string TypedToSnbt(FloatTag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(
        getString(self.data) + (static_cast<bool>(format & SnbtFormat::CommentMarks) ? " /*f*/" : "f"),
        format
    );
}
std::string TypedToSnbt(DoubleTag const& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data), format);
}
std::string TypedToSnbt(StringTag const& self, uchar, SnbtFormat format) {
    std::string res = toDumpString(self.data, fmt::color::sandy_brown, cf::GOLD, format, false);
    return res;
}
std::string TypedToSnbt(ListTag const& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::deep_sky_blue);

    std::string res;

    std::string lbracket{"["}, rbracket{"]"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = ll::string_utils::applyTextStyle(bracketColor, lbracket);
            rbracket = ll::string_utils::applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::MATERIAL_DIAMOND);
            rbracket = WrapColorCode(rbracket, cf::MATERIAL_DIAMOND);
        }
    }

    res += lbracket;

    size_t      i = self.mList.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = isMinimize(format);
    bool isNewLine   = (int)format & (int)SnbtFormat::ArrayLineFeed;

    if (isNewLine && self.size() > 0) {
        res += '\n';
    }

    for (auto& tag : self.mList) {
        i--;
        if (isNewLine) {
            res += indentSpace;
        }

        auto key = tag->toSnbt(format, indent);

        if (isNewLine) {
            ll::string_utils::replaceAll(key, "\n", "\n" + indentSpace);
        }
        res += key;


        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) {
                res += ' ';
            }
        }
        if (isNewLine) {
            res += '\n';
        }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(CompoundTag const& self, uchar indent, SnbtFormat format) {
    auto bracketColor = fmt::fg(fmt::color::orchid);

    std::string res;

    std::string lbracket{"{"}, rbracket{"}"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = ll::string_utils::applyTextStyle(bracketColor, lbracket);
            rbracket = ll::string_utils::applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::LIGHT_PURPLE);
            rbracket = WrapColorCode(rbracket, cf::LIGHT_PURPLE);
        }
    }

    res += lbracket;

    size_t      i = self.mTags.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = isMinimize(format);
    bool isNewLine   = (int)format & (int)SnbtFormat::CompoundLineFeed;

    if (isNewLine && self.size() > 0) {
        res += '\n';
    }

    for (auto& [k, v] : self.mTags) {
        i--;
        if (isNewLine) {
            res += indentSpace;
        }

        auto keyStr = toDumpString(k, fmt::color::sky_blue, cf::AQUA, format, true);

        res += keyStr;

        res += ':';

        if (!isMinimized) {
            res += ' ';
        }

        auto key = v.toSnbt(format, indent);

        if (isNewLine) {
            ll::string_utils::replaceAll(key, "\n", "\n" + indentSpace);
        }
        res += key;

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) {
                res += ' ';
            }
        }
        if (isNewLine) {
            res += '\n';
        }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(ByteArrayTag const& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::yellow);

    std::string res;

    std::string lbracket{"[B;"}, rbracket{"]"};
    if (static_cast<bool>(format & SnbtFormat::CommentMarks)) {
        lbracket = "[ /*B;*/";
    }

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = ll::string_utils::applyTextStyle(bracketColor, lbracket);
            rbracket = ll::string_utils::applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::YELLOW);
            rbracket = WrapColorCode(rbracket, cf::YELLOW);
        }
    }

    res += lbracket;

    size_t      i = self.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = isMinimize(format);
    bool isNewLine   = (int)format & (int)SnbtFormat::ArrayLineFeed;

    if (isNewLine && self.size() > 0) {
        res += '\n';
    }

    std::string back{"b"};
    if (static_cast<bool>(format & SnbtFormat::CommentMarks)) {
        back = " /*b*/";
    }

    for (auto& tag : self.data) {
        i--;
        if (isNewLine) {
            res += indentSpace;
        }

        res += toDumpNumber(getString(tag) + back, format);

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) {
                res += ' ';
            }
        }
        if (isNewLine) {
            res += '\n';
        }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(IntArrayTag const& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::yellow);

    std::string res;

    std::string lbracket{"[I;"}, rbracket{"]"};
    if (static_cast<bool>(format & SnbtFormat::CommentMarks)) {
        lbracket = "[ /*I;*/";
    }

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = ll::string_utils::applyTextStyle(bracketColor, lbracket);
            rbracket = ll::string_utils::applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::YELLOW);
            rbracket = WrapColorCode(rbracket, cf::YELLOW);
        }
    }

    res += lbracket;

    size_t      i = self.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = isMinimize(format);
    bool isNewLine   = (int)format & (int)SnbtFormat::ArrayLineFeed;

    if (isNewLine && self.size() > 0) {
        res += '\n';
    }

    for (auto& tag : self.data) {
        i--;
        if (isNewLine) {
            res += indentSpace;
        }

        res += toDumpNumber(getString(tag), format);

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) {
                res += ' ';
            }
        }
        if (isNewLine) {
            res += '\n';
        }
    }

    res += rbracket;

    return res;
}
} // namespace ll::nbt::detail
