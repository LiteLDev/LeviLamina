#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Features.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Features; }
namespace Json { class Value; }
// clang-format on

namespace Json {

class Reader {
public:
    // Reader inner types declare
    // clang-format off
    class ErrorInfo;
    class Token;
    // clang-format on

    using Location = char const*;

    // Reader inner types define
    enum class TokenType : int {
        EndOfStream     = 0x0,
        ObjectBegin     = 0x1,
        ObjectEnd       = 0x2,
        ArrayBegin      = 0x3,
        ArrayEnd        = 0x4,
        String          = 0x5,
        Number          = 0x6,
        True            = 0x7,
        False           = 0x8,
        Null            = 0x9,
        ArraySeparator  = 0xA,
        MemberSeparator = 0xB,
        Comment         = 0xC,
        Error           = 0xD,
    };

    class Token {

    public:
        TokenType type_;
        Location  start_;
        Location  end_;
    };

    class ErrorInfo {
    public:
        Token       token_;
        std::string message_;
        Location    extra_;

    public:
        // NOLINTBEGIN
        // symbol: ??1ErrorInfo@Reader@Json@@QEAA@XZ
        MCAPI ~ErrorInfo();

        // NOLINTEND
    };

    using Nodes  = std::stack<Value*>;
    using Errors = std::deque<ErrorInfo>;

public:
    Nodes          nodes_;
    Errors         errors_;
    std::string    document_;
    Location       begin_;
    Location       end_;
    Location       current_;
    Location       lastValueEnd_;
    Json::Value*   lastValue_;
    std::string    commentsBefore_;
    Json::Features features_;
    bool           collectComments_;

public:
    // NOLINTBEGIN
    // symbol: ??0Reader@Json@@QEAA@XZ
    MCAPI Reader();

    // symbol: ??0Reader@Json@@QEAA@AEBVFeatures@1@@Z
    MCAPI explicit Reader(class Json::Features const& features);

    // symbol:
    // ?getFormattedErrorMessages@Reader@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getFormattedErrorMessages() const;

    // symbol: ?parse@Reader@Json@@QEAA_NAEAV?$basic_istream@DU?$char_traits@D@std@@@std@@AEAVValue@2@_N@Z
    MCAPI bool parse(std::istream&, class Json::Value&, bool);

    // symbol:
    // ?parse@Reader@Json@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@2@_N@Z
    MCAPI bool parse(std::string const& document, class Json::Value& root, bool collectComments);

    // symbol: ?parse@Reader@Json@@QEAA_NPEBD_KAEAVValue@2@_N@Z
    MCAPI bool parse(char const* originalBegin, uint64 length, class Json::Value& root, bool collectComments);

    // symbol: ??1Reader@Json@@QEAA@XZ
    MCAPI ~Reader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?addError@Reader@Json@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVToken@12@PEBD@Z
    MCAPI bool addError(std::string const& message, class Json::Reader::Token& token, char const* extra);

    // symbol: ?decodeDouble@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value decodeDouble(class Json::Reader::Token&, bool&);

    // symbol: ?decodeNumber@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value decodeNumber(class Json::Reader::Token&, bool&);

    // symbol: ?decodeString@Reader@Json@@AEAA_NAEAVToken@12@PEAD@Z
    MCAPI bool decodeString(class Json::Reader::Token&, char*);

    // symbol: ?decodeString@Reader@Json@@AEAA?AVCZString@Value@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value::CZString decodeString(class Json::Reader::Token&, bool&);

    // symbol: ?decodeUnicodeCodePoint@Reader@Json@@AEAA_NAEAVToken@12@AEAPEBDPEBDAEAI@Z
    MCAPI bool
    decodeUnicodeCodePoint(class Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    // symbol: ?decodeUnicodeEscapeSequence@Reader@Json@@AEAA_NAEAVToken@12@AEAPEBDPEBDAEAI@Z
    MCAPI bool
    decodeUnicodeEscapeSequence(class Json::Reader::Token& token, char const*& current, char const* end, uint& unicode);

    // symbol:
    // ?getLocationLineAndColumn@Reader@Json@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
    MCAPI std::string getLocationLineAndColumn(char const*) const;

    // symbol: ?parse@Reader@Json@@AEAA_NPEBD0AEAVValue@2@_N@Z
    MCAPI bool parse(char const* beginDoc, char const* endDoc, class Json::Value& root, bool collectComments);

    // symbol: ?readArray@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value readArray(class Json::Reader::Token&, bool&);

    // symbol: ?readObject@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value readObject(class Json::Reader::Token&, bool&);

    // symbol: ?readToken@Reader@Json@@AEAA_NAEAVToken@12@@Z
    MCAPI bool readToken(class Json::Reader::Token& token);

    // symbol: ?readValue@Reader@Json@@AEAA?AVValue@2@AEA_N@Z
    MCAPI class Json::Value readValue(bool&);

    // symbol: ?recoverFromError@Reader@Json@@AEAA_NW4TokenType@12@@Z
    MCAPI bool recoverFromError(::Json::Reader::TokenType skipUntilToken);

    // NOLINTEND
};

}; // namespace Json
