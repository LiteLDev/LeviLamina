#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

namespace GeometryAtlas {

struct ItemHandleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PropertyBag>> mBag;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            void(::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)>) const>>
                                                    mVisitItem;
    ::ll::TypedStorage<8, 8, uint64>                mHash;
    ::ll::TypedStorage<4, 4, ::ItemRenderChunkType> mRenderType;
    ::ll::TypedStorage<1, 1, bool>                  mIsAnimated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemHandleData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GeometryAtlas
