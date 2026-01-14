#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct BindingTestFacet {
public:
    // BindingTestFacet inner types declare
    // clang-format off
    struct ComplexType;
    struct ComplexTypeOreUI;
    struct ComplexTypeclass;
    struct DynamicType;
    struct DynamicTypeOreUI;
    struct DynamicTypeclass;
    // clang-format on

    // BindingTestFacet inner types define
    struct ComplexType {};

    struct ComplexTypeOreUI {
    public:
        // ComplexTypeOreUI inner types declare
        // clang-format off
        struct BindingTestFacet;
        // clang-format on

        // ComplexTypeOreUI inner types define
        struct BindingTestFacet {};
    };

    struct ComplexTypeclass {};

    struct DynamicType {};

    struct DynamicTypeOreUI {
    public:
        // DynamicTypeOreUI inner types declare
        // clang-format off
        struct BindingTestFacet;
        // clang-format on

        // DynamicTypeOreUI inner types define
        struct BindingTestFacet {};
    };

    struct DynamicTypeclass {};
};

} // namespace OreUI
