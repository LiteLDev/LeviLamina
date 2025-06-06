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
        MCNAPI ~AddModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ~RemoveModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    using Variant = ::std::variant<
        ::AttributeRequestComponent::AddModifier,
        ::AttributeRequestComponent::RemoveModifier,
        ::AttributeRequestComponent::AddBuffModifier>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::AttributeRequestComponent::AddModifier,
            ::AttributeRequestComponent::RemoveModifier,
            ::AttributeRequestComponent::AddBuffModifier>>>
        mRequests;
    // NOLINTEND
};
