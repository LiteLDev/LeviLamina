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
    // IEntitySystemsCollection inner types define
    using SystemIndex = uint;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntitySystemsCollection() = default;

    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) = 0;

    virtual void registerSystem(::std::unique_ptr<::ISystem> system, ::SystemInfo const& info) = 0;

    virtual void foreachSystem(::std::function<void(::ISystem&)> const& callback) = 0;

    virtual void foreachTickingSystem(
        ::EntitySystemsFilter const&                                       filter,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const& callback,
        bool                                                               captureTimings
    ) = 0;

    virtual void foreachSingleTickingSystem(
        ::EntitySystemsFilter const&                                       filter,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const& callback,
        bool                                                               captureTimings
    ) = 0;

    virtual uint64 getLargestSystemIndex() const = 0;

    virtual ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId id) const = 0;

    virtual ::ITickingSystem* getTickingSystemForTickingSystemId(::TickingSystemId id) const = 0;

    virtual ::ComponentInfo const* getComponentInfoForId(uint id) const = 0;

    virtual void foreachComponentInfo(::std::function<void(uint, ::ComponentInfo const&)> const& callback) const = 0;

    virtual bool hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const = 0;

    virtual ::std::vector<::SystemTiming> gatherSystemTimings() const = 0;

    virtual bool _isValidIndex(uint index) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
