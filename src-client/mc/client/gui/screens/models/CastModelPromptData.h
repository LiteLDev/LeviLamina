#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CharacterSelectorModel;
class PersonaScreenModel;
struct CatalogInfo;
// clang-format on

class CastModelPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CatalogInfo&>                                        mCatalogInfo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CharacterSelectorModel>> mCharacterSelectorModel;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mPrimaryUserID;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasSeenLatestDefaultCharacterList;
    // NOLINTEND

public:
    // prevent constructor by default
    CastModelPromptData& operator=(CastModelPromptData const&);
    CastModelPromptData(CastModelPromptData const&);
    CastModelPromptData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CastModelPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CastModelPromptData(
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>  screenModel,
        ::Bedrock::NonOwnerPointer<::CharacterSelectorModel> characterSelectorModel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>  screenModel,
        ::Bedrock::NonOwnerPointer<::CharacterSelectorModel> characterSelectorModel
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
