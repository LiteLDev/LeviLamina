#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IScreenChangedEventing;
namespace Social { class IGameConnectionInfoProvider; }
// clang-format on

namespace OreUI {

class RouterEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScreenChangedEventing&>                         mScreenChangedEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 8, ::Social::IGameConnectionInfoProvider&>            mGameConnectionInfoProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterEventing& operator=(RouterEventing const&);
    RouterEventing(RouterEventing const&);
    RouterEventing();
};

} // namespace OreUI
