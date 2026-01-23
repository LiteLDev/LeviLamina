#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social::Events { class CompoundMeasurement; }
namespace Social::Events { class Measurement; }
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
    ::ll::UntypedStorage<8, 32> mUnk8db555;
    ::ll::UntypedStorage<4, 4>  mUnkb6490e;
    ::ll::UntypedStorage<4, 4>  mUnk4d8050;
    ::ll::UntypedStorage<8, 8>  mUnked1ee5;
    ::ll::UntypedStorage<8, 8>  mUnk406331;
    ::ll::UntypedStorage<4, 4>  mUnk510604;
    ::ll::UntypedStorage<8, 56> mUnk203da5;
    ::ll::UntypedStorage<8, 64> mUnkf154f2;
    ::ll::UntypedStorage<8, 24> mUnkcc0cdb;
    ::ll::UntypedStorage<8, 24> mUnk3c667f;
    ::ll::UntypedStorage<8, 56> mUnk619e71;
    ::ll::UntypedStorage<1, 1>  mUnkab0bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Event(::Social::Events::Event const&);

    MCNAPI Event(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );

    MCNAPI void _addOrUpdateCompoundMeasurement(
        ::std::string const&                    dynamicColumnName,
        ::Social::Events::CompoundMeasurement&& compoundMeasurement
    );

    MCNAPI bool _areAllPropertiesEqual(::Social::Events::Event const& other) const;

    MCNAPI bool _areUniquePropertiesEqual(::Social::Events::Event const& other) const;

    MCNAPI void addMeasurement(::Social::Events::Measurement const& measurement);

    MCNAPI void addProperty(::Social::Events::Property const& property, bool isUniqueProperty);

    MCNAPI ::brstd::flat_map<
        ::std::string,
        ::std::vector<::Social::Events::Property>,
        ::std::less<::std::string>,
        ::std::vector<::std::string>,
        ::std::vector<::std::vector<::Social::Events::Property>>>
    getCompoundsAsDynamicProperties() const;

    MCNAPI ::std::optional<::std::reference_wrapper<::Social::Events::Property const>>
    getProperty(::std::string const& propertyName) const;

    MCNAPI_C ::Json::Value measurementsAsJsonValue() const;

    MCNAPI_C ::Json::Value propertiesAsJsonValue() const;

    MCNAPI void updateCompoundMeasurements(::Social::Events::Event const& event);

    MCNAPI void updateMeasurements(::Social::Events::Event const& other);

    MCNAPI ~Event();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::Event const&);

    MCNAPI void* $ctor(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
