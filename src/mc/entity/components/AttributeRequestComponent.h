#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributeRequestComponent {
public:
    // AttributeRequestComponent inner types declare
    // clang-format off
    struct AddModifier;
    struct RemoveModifier;
    // clang-format on

    // AttributeRequestComponent inner types define
    struct AddModifier {
    public:
        // prevent constructor by default
        AddModifier& operator=(AddModifier const&);
        AddModifier(AddModifier const&);
        AddModifier();

    public:
        // NOLINTBEGIN
        MCAPI ~AddModifier();

        // NOLINTEND
    };

    struct RemoveModifier {
    public:
        // prevent constructor by default
        RemoveModifier& operator=(RemoveModifier const&);
        RemoveModifier(RemoveModifier const&);
        RemoveModifier();

    public:
        // NOLINTBEGIN
        MCAPI ~RemoveModifier();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AttributeRequestComponent& operator=(AttributeRequestComponent const&);
    AttributeRequestComponent(AttributeRequestComponent const&);
    AttributeRequestComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AttributeRequestComponent& operator=(struct AttributeRequestComponent&&);

    // NOLINTEND
};
