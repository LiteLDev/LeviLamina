#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontAlias;
class FontRepository;
struct BitmapFont;
struct MSDFFont;
struct TrueTypeFont;
struct TrueTypeMsdfFont;
namespace Json { class Value; }
namespace mce { class TextureGroup; }
// clang-format on

namespace FontLoadingUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::shared_ptr<::BitmapFont>
loadBitmapFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCNAPI ::std::shared_ptr<::FontAlias> loadFontAlias(
    ::Json::Value const&                            aliasMetaData,
    ::std::shared_ptr<::mce::TextureGroup>          textureGroup,
    ::std::shared_ptr<::Font>                       defaultFont,
    ::Bedrock::NotNullNonOwnerPtr<::FontRepository> fontRepository
);

MCNAPI ::std::shared_ptr<::MSDFFont>
loadMsdfFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCNAPI ::std::shared_ptr<::TrueTypeFont>
loadTrueTypeFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCNAPI ::std::shared_ptr<::TrueTypeMsdfFont>
loadTrueTypeMsdfFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
// NOLINTEND

} // namespace FontLoadingUtils
