#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BitmapFont;
class MSDFFont;
class TrueTypeFont;
class TrueTypeMsdfFont;
namespace Json { class Value; }
namespace mce { class TextureGroup; }
// clang-format on

namespace FontLoadingUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::shared_ptr<::BitmapFont>
loadBitmapFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCAPI ::std::shared_ptr<::MSDFFont>
loadMsdfFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCAPI ::std::shared_ptr<::TrueTypeFont>
loadTrueTypeFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

MCAPI ::std::shared_ptr<::TrueTypeMsdfFont>
loadTrueTypeMsdfFont(::Json::Value const& fontMetaData, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
// NOLINTEND

} // namespace FontLoadingUtils
