#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
struct ComponentInfo;
struct EntitySystemTickingMode;
struct EntitySystemsFilter;
struct ISystem;
struct SystemCategory;
struct SystemInfo;
struct SystemTiming;
struct TickingSystemId;
// clang-format on

struct IEntitySystemsCollection {
public:
    // prevent constructor by default
    IEntitySystemsCollection& operator=(IEntitySystemsCollection const&);
    IEntitySystemsCollection(IEntitySystemsCollection const&);
    IEntitySystemsCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitySystemsCollection();

    // vIndex: 1
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const>,
        ::std::unique_ptr<::ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
    ) = 0;

    // vIndex: 2
    virtual void registerSystem(::std::unique_ptr<::ISystem>, ::SystemInfo const&) = 0;

    // vIndex: 3
    virtual void foreachSystem(::std::function<void(::ISystem&)> const&) = 0;

    // vIndex: 4
    virtual void foreachTickingSystem(
        ::EntitySystemsFilter const&,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const&,
        bool
    ) = 0;

    // vIndex: 5
    virtual void foreachSingleTickingSystem(
        ::EntitySystemsFilter const&,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const&,
        bool
    ) = 0;

    // vIndex: 6
    virtual ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId) const = 0;

    // vIndex: 7
    virtual ::ITickingSystem* getTickingSystemForTickingSystemId(::TickingSystemId) const = 0;

    // vIndex: 8
    virtual ::ComponentInfo const* getComponentInfoForId(uint) const = 0;

    // vIndex: 9
    virtual void foreachComponentInfo(::std::function<void(uint, ::ComponentInfo const&)> const&) const = 0;

    // vIndex: 10
    virtual bool hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const) const = 0;

    // vIndex: 11
    virtual ::std::vector<::SystemTiming> gatherSystemTimings() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
