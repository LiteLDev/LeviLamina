#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class AttributeRegistry {
public:
    // AttributeRegistry inner types declare
    // clang-format off
    class RegisteredAttributeEntryBase;
    // clang-format on

    // AttributeRegistry inner types define
    class RegisteredAttributeEntryBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk95e23b;
        ::ll::UntypedStorage<2, 2> mUnk948cf6;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegisteredAttributeEntryBase& operator=(RegisteredAttributeEntryBase const&);
        RegisteredAttributeEntryBase(RegisteredAttributeEntryBase const&);
        RegisteredAttributeEntryBase();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RegisteredAttributeEntryBase() = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkdb3af7;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeRegistry& operator=(AttributeRegistry const&);
    AttributeRegistry(AttributeRegistry const&);
    AttributeRegistry();
};

} // namespace EAS
