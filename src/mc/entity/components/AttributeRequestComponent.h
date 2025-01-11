#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributeRequestComponent {
public:
    // AttributeRequestComponent inner types declare
    // clang-format off
    struct AddBuffModifier;
    struct AddModifier;
    struct RemoveModifier;
    // clang-format on

    // AttributeRequestComponent inner types define
    struct AddModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk2d8334;
        ::ll::UntypedStorage<8, 8>  mUnka2b80d;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddModifier& operator=(AddModifier const&);
        AddModifier(AddModifier const&);
        AddModifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AddModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct RemoveModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc70f2c;
        ::ll::UntypedStorage<8, 8>  mUnkde8f14;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoveModifier& operator=(RemoveModifier const&);
        RemoveModifier(RemoveModifier const&);
        RemoveModifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~RemoveModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct AddBuffModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk960a83;
        ::ll::UntypedStorage<4, 4> mUnkb25e71;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddBuffModifier& operator=(AddBuffModifier const&);
        AddBuffModifier(AddBuffModifier const&);
        AddBuffModifier();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk14b449;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeRequestComponent& operator=(AttributeRequestComponent const&);
    AttributeRequestComponent(AttributeRequestComponent const&);
    AttributeRequestComponent();
};
