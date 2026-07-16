#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolume;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

class RelativeVolumeListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk77850e;
    ::ll::UntypedStorage<4, 12> mUnkfe2614;
    ::ll::UntypedStorage<8, 24> mUnk83c576;
    ::ll::UntypedStorage<4, 4>  mUnk6756a4;
    ::ll::UntypedStorage<4, 4>  mUnkd8738a;
    ::ll::UntypedStorage<4, 16> mUnkbfff20;
    ::ll::UntypedStorage<8, 8>  mUnk89b559;
    // NOLINTEND

public:
    // prevent constructor by default
    RelativeVolumeListBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BoundingBox getBoundingBox() const /*override*/;

    virtual ::BlockPos getMin() const /*override*/;

    virtual ::BlockPos getMax() const /*override*/;

    virtual ::glm::ivec3 getSpan() const /*override*/;

    virtual int getCapacity() const /*override*/;

    virtual bool isInside(::BlockPos const& pos) const /*override*/;

    virtual void translate(::BlockPos const& delta) /*override*/;

    virtual void forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const /*override*/;

    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI RelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI void add(::SimpleBlockVolume const& _relativeVolume);

    MCNAPI void clear();

    MCNAPI void enableAdjacencyMap();

#ifdef LL_PLAT_C
    MCNAPI void forEachRelativeBlockPosition(::std::function<bool(::BlockPos const&)> callback) const;
#endif

    MCNAPI ::std::vector<::BlockPos> getBlockPositionList(bool relative) const;

    MCNAPI ::std::vector<::Vec3> getVec3PositionList(bool relative) const;

    MCNAPI bool hasAdjacent(::BlockPos const& pos, ::BlockPos const& offset) const;

    MCNAPI void moveTo(::BlockPos const& pos);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume& operator=(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI bool operator==(::Editor::RelativeVolumeListBlockVolume const& rhs) const;

    MCNAPI void remove(::SimpleBlockVolume const& relativeVolume);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume&& rhs);

    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume const& rhs);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BoundingBox $getBoundingBox() const;

    MCNAPI ::BlockPos $getMin() const;

    MCNAPI ::BlockPos $getMax() const;

    MCNAPI ::glm::ivec3 $getSpan() const;

    MCNAPI int $getCapacity() const;

    MCNAPI bool $isInside(::BlockPos const& pos) const;

    MCNAPI void $translate(::BlockPos const& delta);

    MCNAPI void $forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const;

    MCNAPI ::std::set<::ChunkPos> $getChunks() const;

    MCNAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
