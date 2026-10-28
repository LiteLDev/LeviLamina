#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Annotations::Loader::CurrentVersion::MetaData { struct Data; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Annotations::Loader::CurrentVersion::MetaData {
// functions
// NOLINTBEGIN
MCNAPI bool load(
    ::cereal::ReflectionCtx&                                       ctx,
    ::std::string const&                                           json,
    ::Editor::Annotations::Loader::CurrentVersion::MetaData::Data& data
);

MCNAPI bool save(
    ::cereal::ReflectionCtx&                                             ctx,
    ::Editor::Annotations::Loader::CurrentVersion::MetaData::Data const& data,
    ::std::string&                                                       outJson
);
// NOLINTEND

} // namespace Editor::Annotations::Loader::CurrentVersion::MetaData
