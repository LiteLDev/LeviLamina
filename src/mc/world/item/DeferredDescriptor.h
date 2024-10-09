#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct DeferredDescriptor : public ::ItemDescriptor::BaseDescriptor {
public:
    // prevent constructor by default
    DeferredDescriptor& operator=(DeferredDescriptor const&);
    DeferredDescriptor(DeferredDescriptor const&);
    DeferredDescriptor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;

    // vIndex: 2
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;

    // vIndex: 3
    virtual std::string const& getFullName() const;

    // vIndex: 6
    virtual std::map<std::string, std::string> toMap() const;

    // vIndex: 7
    virtual std::optional<class CompoundTag> save() const;

    // vIndex: 9
    virtual void serialize(class BinaryStream& stream) const;

    // vIndex: 10
    virtual ::ItemDescriptor::InternalType getType() const;

    // vIndex: 12
    virtual uint64 getHash() const;

    // vIndex: 13
    virtual bool shouldResolve() const;

    // vIndex: 14
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

    // vIndex: 15
    virtual ~DeferredDescriptor() = default;

    MCAPI static class Bedrock::Result<std::unique_ptr<struct DeferredDescriptor>>
    deserialize(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor>
          _initFromBlockLegacy(class BlockLegacy const& block, class WeakPtr<class Item>&& item) const;

    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor>
          _initFromItem(class WeakPtr<class Item>&& item, short aux) const;

    // NOLINTEND
};
