#pragma once
#include "ll/api/base/Global.h"
#include "compact_enc_det/util/encodings/encodings.h"
#define UNICODE // compact_enc_det undefined UNICODE, so we need to define it again

namespace encoding {
LLAPI ::Encoding getLocalEncoding();
LLAPI ::Encoding detectEncoding(std::string const& text, bool* isReliable = nullptr);

LLAPI std::string fromUnicode(std::wstring const& text, ::Encoding to = ::Encoding::UTF8);
LLAPI std::wstring toUnicode(std::string const& text, ::Encoding from = ::Encoding::UTF8);
LLAPI std::string toUTF8(std::string const& text);
LLAPI std::string toUTF8(std::string const& text, ::Encoding from);

LLAPI std::string convert(std::string const& text, ::Encoding from, ::Encoding to);
} // namespace encoding
