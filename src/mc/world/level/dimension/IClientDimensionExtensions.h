#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkSource;
class Dimension;
class IStructureWireframeQueue;
struct ClientDimensionExtensions;
// clang-format on

class IClientDimensionExtensions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientDimensionExtensions() = default;

    virtual void visitMutable(::brstd::function_ref<void(::ClientDimensionExtensions&)>) = 0;

    virtual void visitStructureWireframe(::brstd::function_ref<void(::IStructureWireframeQueue&)>) = 0;

    virtual void init(::Dimension&) = 0;

    virtual void startLeaveGame() = 0;

    virtual void trackUpdateBlockPacket(::BlockPos const&) = 0;

    virtual ::Bedrock::NonOwnerPointer<::ChunkSource> createClientServerChunkSource(::DimensionType const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
