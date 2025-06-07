#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ExpressionNode;
class PerlinSimplexNoise;
class RenderParams;
struct SurfaceMaterialAdjustmentEvaluated;
// clang-format on

struct SurfaceMaterialAdjustmentAttributes : public ::BiomeComponentBase {
public:
    // SurfaceMaterialAdjustmentAttributes inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceMaterialAdjustmentAttributes inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk4988e6;
        ::ll::UntypedStorage<4, 4>  mUnk419993;
        ::ll::UntypedStorage<4, 4>  mUnk5e506c;
        ::ll::UntypedStorage<8, 16> mUnk7701b7;
        ::ll::UntypedStorage<8, 16> mUnk610e0d;
        ::ll::UntypedStorage<8, 56> mUnkff1866;
        // NOLINTEND

    public:
        // prevent constructor by default
        Element& operator=(Element const&);
        Element(Element const&);
        Element();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Element();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SurfaceMaterialAdjustmentAttributes::Element>> mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(
        ::RenderParams&                        molangParams,
        ::gsl::not_null<::PerlinSimplexNoise*> noise,
        ::BlockPos const&                      pos,
        int                                    heightMin,
        int                                    heightMax
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    parseExpressionNodeFloat(::ExpressionOp op, ::std::string const& data, ::ExpressionNode& node, float defaultValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
