#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NewPlayerSystem;
struct SkinRepositoryClientInterface;
// clang-format on

namespace OreUI {

class NewPlayerChoicesFacet : public ::OreUI::FacetBase<::OreUI::NewPlayerChoicesFacet> {
public:
    // NewPlayerChoicesFacet inner types declare
    // clang-format off
    struct SelectableCharacter;
    // clang-format on

    // NewPlayerChoicesFacet inner types define
    struct SelectableCharacter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<8, 32, ::std::string> mId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SelectableCharacter();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NewPlayerChoicesFacet::SelectableCharacter>> mSelectableCharacters;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsDirty;
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&>                        mSkinRepositoryClientInterface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> const> mNewPlayerSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    NewPlayerChoicesFacet& operator=(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet(NewPlayerChoicesFacet const&);
    NewPlayerChoicesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~NewPlayerChoicesFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _populateCharacterSkinData();

    MCAPI void applySelectedCharacterSkin() const;

    MCAPI ::std::string const& getSelectedCharacterId() const;

    MCAPI void setIsCreative(bool creative);

    MCAPI void setSelectedCharacter(::std::string const& selectedId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
