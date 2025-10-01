#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/utility/NumberConversionResult.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SemVersion;
namespace Json { class Value; }
// clang-format on

namespace Util {
// functions
// NOLINTBEGIN
MCNAPI ::std::string base64_decode(::std::string const& encoded_string);

MCNAPI ::std::string base64_encode(uchar const* bytes_to_encode, uint64 in_len, bool pad);

MCNAPI ::std::string base64url_decode(::std::string encoded);

MCNAPI ::std::string base64url_encode(::std::string str);

MCNAPI ::std::string ensureNamespace(::std::string const& id, ::std::string_view defaultNamespace);

MCNAPI bool equalIgnoreCase(::std::string_view lhs, ::std::string_view rhs);

MCNAPI ::std::string formatTickDuration(int ticks);

MCNAPI ::std::string fromHex(::std::string_view input);

MCNAPI ::BidirectionalUnorderedMap<int, uint64> generateHashMapFromListTag(::ListTag const& enumValues);

MCNAPI ::std::string generateRandomId(int modifier);

MCNAPI ::std::string_view getNameWithoutNamespace(::std::string_view name);

MCNAPI uint hashCodeAsUtf16(::std::string_view sv);

MCNAPI bool isValidNamespaceFormat(::std::string_view name);

MCNAPI bool isValidUTF8(::std::string_view content);

MCNAPI bool isVanillaNamespace(::std::string const& identifier);

MCNAPI void loadGameVersion(::SemVersion& version, ::Json::Value const& versionNode);

MCNAPI void normalizeLineEndings(::std::string& str);

MCNAPI ::std::string removeChars(::std::string str, ::std::string const& characters);

MCNAPI ::std::string removeIllegalChars(::std::string str);

MCNAPI ::std::string removeTrailingSpaces(::std::string const& str);

MCNAPI ::std::istream& safeGetline(::std::istream& inputStream, ::std::string& outString);

MCNAPI ::std::vector<::std::string> split(::std::string_view view, char delim);

MCNAPI ::std::vector<::std::string> splitAndDiscardEmpty(::std::string const& str, char delim);

MCNAPI ::std::vector<::std::string> splitLines(
    ::std::string const&                str,
    ::std::vector<::std::string> const& delims,
    bool                                includeDelimCharsInResult,
    bool                                includeEmptyLines,
    ::std::istream& (*fnGetline)(::std::istream&, ::std::string&)
);

MCNAPI ::std::vector<::std::string>& splitString(::std::string_view s, char delim, ::std::vector<::std::string>& elems);

MCNAPI ::std::vector<::std::string_view>&
splitStringAsViews(::std::string_view s, char delim, ::std::vector<::std::string_view>& elems);

MCNAPI ::std::vector<::std::string_view> splitToViews(::std::string_view view, char delim);

MCNAPI ::std::string& stringReplace(::std::string& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string
stringReplaceCopy(::std::string const& s, ::std::string const& src, ::std::string const& dst, int maxCount);

MCNAPI ::std::string stringTrim(::std::string const& s);

MCNAPI ::std::string stringTrim(::std::string const& s, ::std::string const& chars);

MCNAPI bool toBool(::std::string const& input, bool& destination);

MCNAPI ::std::string toCamelCase(::std::string const& src, char delimiter);

MCNAPI ::Util::NumberConversionResult toIntWithMinMax(::std::string_view inputStr, int& destination, int min, int max);

MCNAPI ::std::string toLower(::std::string_view inString);

MCNAPI ::std::string toStringWithPaddedZeroes(uint number, uchar digitCount);

MCNAPI ::std::string toUpper(::std::string_view inString);

MCNAPI int utf8len(::std::string_view str);

MCNAPI ::std::string utf8substring(::std::string const& str, int startIndex, int endIndex);

MCNAPI bool validateIdentifier(
    ::std::string const&                       id,
    ::LogArea                                  logArea,
    bool                                       allowMinecraftNamespace,
    ::std::pair<::std::string, ::std::string>* idNameOut
);

MCNAPI bool validateIdentifierChunk(::std::string const& chunk, ::LogArea logArea);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& EMPTY_GUID();

MCNAPI ::std::string const& EMPTY_STRING();

MCNAPI ::std::string const& HEX_CHARS();

MCNAPI ::std::string const& NEW_LINE();
// NOLINTEND

} // namespace Util
