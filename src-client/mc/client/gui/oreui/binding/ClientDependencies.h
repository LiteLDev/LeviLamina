#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ClipboardProxy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ClientDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientDependencies(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI ::IClientInstance& getClient() const;

    MCAPI ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() const;

    MCAPI ::IOptionRegistry& getOptions() const;

    MCAPI ::Social::IUserManager& getUserManager() const;

    MCAPI ~ClientDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
