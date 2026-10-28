#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace AudioContent::ServerContent::v1_0_0 { struct ServerAudioContent; }
// clang-format on

namespace AudioContent {

class ServerAudioContentLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkdc7314;
    ::ll::UntypedStorage<8, 264> mUnkad3bfc;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAudioContentLoader& operator=(ServerAudioContentLoader const&);
    ServerAudioContentLoader(ServerAudioContentLoader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerAudioContentLoader();

    MCNAPI ::Bedrock::Result<::AudioContent::ServerContent::v1_0_0::ServerAudioContent>
    load(::std::string document) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace AudioContent
