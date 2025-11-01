#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class WorldTemplatePackManifest;
struct WorldTemplateData;
// clang-format on

struct WorldTemplateInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1104> mUnk207bb5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateInfo(::WorldTemplateInfo const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::WorldTemplateData buildTemplateData(::WorldTemplatePackManifest const& manifest, ::Bedrock::NonOwnerPointer<::IFileAccess> fileAccess);

    MCNAPI static ::WorldTemplateInfo const& getInvalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateInfo const&);
    // NOLINTEND

};
