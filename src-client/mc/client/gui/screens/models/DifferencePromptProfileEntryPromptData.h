#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
struct PersonaProfile;
// clang-format on

class DifferencePromptProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController>> mScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PersonaProfile>>                        mPersonaProfile;
    // NOLINTEND

public:
    // prevent constructor by default
    DifferencePromptProfileEntryPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DifferencePromptProfileEntryPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DifferencePromptProfileEntryPromptData(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::std::shared_ptr<::PersonaProfile>                        personaProfile
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::std::shared_ptr<::PersonaProfile>                        personaProfile
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $allowedToOpenCheck() const;

    MCAPI void $callOnOpen();

    MCAPI void $callOnClose();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
