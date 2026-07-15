#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class Event {
public:
    // Event inner types define
    enum class AggregationMode : int {
        None                        = 0,
        Aggregate                   = 1,
        AggregateByUniqueProperties = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk34803d;
    ::ll::UntypedStorage<8, 32> mUnka3e2d1;
    ::ll::UntypedStorage<4, 4>  mUnkb6490e;
    ::ll::UntypedStorage<4, 4>  mUnk4d8050;
    ::ll::UntypedStorage<8, 8>  mUnked1ee5;
    ::ll::UntypedStorage<8, 8>  mUnk406331;
    ::ll::UntypedStorage<4, 4>  mUnk510604;
    ::ll::UntypedStorage<8, 48> mUnkf0c7bf;
    ::ll::UntypedStorage<8, 64> mUnk1c9391;
    ::ll::UntypedStorage<8, 24> mUnkcc0cdb;
    ::ll::UntypedStorage<8, 24> mUnk3c667f;
    ::ll::UntypedStorage<8, 48> mUnkfc2d75;
    ::ll::UntypedStorage<1, 1>  mUnkab0bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Event(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );
#endif

    MCNAPI void addProperty(::Social::Events::Property const& property, bool isUniqueProperty);

#ifdef LL_PLAT_C
    MCNAPI ::Json::Value measurementsAsJsonValue() const;

    MCNAPI ::Json::Value propertiesAsJsonValue() const;

    MCNAPI ~Event();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social::Events
