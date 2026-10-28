#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace AudioContent::SharedMetadata::v1_0_0 { struct SharedAudioContentMetadata; }
// clang-format on

namespace AudioContent {

class SharedAudioContentMetadataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk917274;
    ::ll::UntypedStorage<8, 264> mUnk550d15;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedAudioContentMetadataLoader& operator=(SharedAudioContentMetadataLoader const&);
    SharedAudioContentMetadataLoader(SharedAudioContentMetadataLoader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SharedAudioContentMetadataLoader();

    MCNAPI ::Bedrock::Result<::AudioContent::SharedMetadata::v1_0_0::SharedAudioContentMetadata>
    load(::std::string document) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace AudioContent
