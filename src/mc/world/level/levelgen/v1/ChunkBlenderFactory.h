#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlendingData;
class ChunkBlender;
class ChunkPos;
class ChunkSource;
namespace ChunkBlenderUtil { struct AttenuationData; }
// clang-format on

class ChunkBlenderFactory {
public:
    // ChunkBlenderFactory inner types declare
    // clang-format off
    struct BlendCheckEntry;
    struct IntermediateAttenuationData;
    // clang-format on

    // ChunkBlenderFactory inner types define
    struct IntermediateAttenuationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnke0823b;
        ::ll::UntypedStorage<4, 4>   mUnkfd4b42;
        ::ll::UntypedStorage<4, 4>   mUnk28d476;
        ::ll::UntypedStorage<4, 4>   mUnk6df328;
        ::ll::UntypedStorage<4, 164> mUnk38de29;
        ::ll::UntypedStorage<1, 41>  mUnke039d1;
        ::ll::UntypedStorage<2, 192> mUnke80a05;
        ::ll::UntypedStorage<1, 1>   mUnkad623c;
        ::ll::UntypedStorage<1, 1>   mUnkcd6bd7;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateAttenuationData& operator=(IntermediateAttenuationData const&);
        IntermediateAttenuationData(IntermediateAttenuationData const&);
        IntermediateAttenuationData();
    };

    struct BlendCheckEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4369c3;
        ::ll::UntypedStorage<1, 1> mUnkb5ea4e;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlendCheckEntry& operator=(BlendCheckEntry const&);
        BlendCheckEntry(BlendCheckEntry const&);
        BlendCheckEntry();
    };

    using ChunkIntermediateAttenuationData =
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::shared_ptr<::ChunkBlender>>> mAttenuatorCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mAttenuatorSharedMutex;
    ::ll::TypedStorage<1, 1, bool const>          mIsClientSide;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>      mChunkSource;
    ::ll::TypedStorage<2, 2, short const>         mDimensionMinHeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::ChunkBlender> _createChunkBlendingAttenuator(::ChunkPos const& lcPosition) const;

    MCNAPI ::std::vector<::std::array<::ChunkBlenderUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>> const&
            chunkIntermediateAttenuationData
    ) const;

    MCNAPI void _updateIntermediateAttenuationData(
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>>&
                              chunkIntermediateAttenuationData,
        ::ChunkPos const&     oldChunkPosition,
        ::ChunkPos const&     newChunkPosition,
        ::BlendingData const& blendingData,
        bool                  adjacentChunk
    ) const;

    MCNAPI ::std::shared_ptr<::ChunkBlender> getOrCreateChunkBlender(::ChunkPos const& lcPosition);
    // NOLINTEND
};
