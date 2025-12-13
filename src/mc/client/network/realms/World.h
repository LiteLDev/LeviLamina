#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct GameRuleId;
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct World {
public:
    // World inner types define
    enum class State : int {
        Uninitialized = 0,
        Closed        = 1,
        Open          = 2,
        End           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk156a86;
    ::ll::UntypedStorage<4, 4>   mUnk93c9bd;
    ::ll::UntypedStorage<8, 32>  mUnke3ca1d;
    ::ll::UntypedStorage<8, 32>  mUnk6616a8;
    ::ll::UntypedStorage<8, 32>  mUnkf67979;
    ::ll::UntypedStorage<8, 32>  mUnka29ae1;
    ::ll::UntypedStorage<8, 32>  mUnkb61c74;
    ::ll::UntypedStorage<8, 32>  mUnk8b5e11;
    ::ll::UntypedStorage<8, 32>  mUnk89c9da;
    ::ll::UntypedStorage<8, 32>  mUnk724bff;
    ::ll::UntypedStorage<4, 4>   mUnke527f3;
    ::ll::UntypedStorage<4, 4>   mUnk639018;
    ::ll::UntypedStorage<1, 1>   mUnk88061d;
    ::ll::UntypedStorage<4, 4>   mUnke0043d;
    ::ll::UntypedStorage<1, 1>   mUnk1f31a8;
    ::ll::UntypedStorage<4, 8>   mUnk54c6ea;
    ::ll::UntypedStorage<1, 1>   mUnk460012;
    ::ll::UntypedStorage<4, 4>   mUnka3fabd;
    ::ll::UntypedStorage<1, 1>   mUnk41af39;
    ::ll::UntypedStorage<1, 1>   mUnk1fc12d;
    ::ll::UntypedStorage<1, 1>   mUnk6b3fdd;
    ::ll::UntypedStorage<1, 1>   mUnk8a869f;
    ::ll::UntypedStorage<1, 1>   mUnk854fce;
    ::ll::UntypedStorage<4, 4>   mUnk2a4947;
    ::ll::UntypedStorage<4, 4>   mUnk6d7c74;
    ::ll::UntypedStorage<1, 1>   mUnkd8238c;
    ::ll::UntypedStorage<8, 24>  mUnk445c59;
    ::ll::UntypedStorage<8, 24>  mUnk223b36;
    ::ll::UntypedStorage<8, 24>  mUnkad2b6e;
    ::ll::UntypedStorage<4, 16>  mUnk4134c5;
    ::ll::UntypedStorage<1, 1>   mUnke43919;
    ::ll::UntypedStorage<8, 16>  mUnk48dc55;
    ::ll::UntypedStorage<8, 16>  mUnk9f8761;
    ::ll::UntypedStorage<8, 8>   mUnkcb0dc1;
    ::ll::UntypedStorage<8, 192> mUnk173f67;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C World();

    MCNAPI_C World(::Realms::World&&);

    MCNAPI_C World(::Realms::World const&);

    MCNAPI_C explicit World(bool valid);

    MCNAPI_C void
    _gameRuleBoolFromJson(::Json::Value const& setting, ::GameRuleId const& id, ::std::string const& name);

    MCNAPI_C void _gameRuleIntFromJson(::Json::Value const& setting, ::GameRuleId const& id, ::std::string const& name);

    MCNAPI_C void applyGameRulesToSlotOptionsJson();

    MCNAPI_C bool areBasicSettingsEqual(::Realms::World const& rhs) const;

    MCNAPI_C int64 getId() const;

    MCNAPI_C ::std::optional<int64> const& getLastSaved() const;

    MCNAPI_C bool const isClosed() const;

    MCNAPI_C bool isInitialized() const;

    MCNAPI_C ::Realms::World& operator=(::Realms::World&&);

    MCNAPI_C ::Realms::World& operator=(::Realms::World const&);

    MCNAPI_C void resetToDefaultSettings_DEPRECATED();

    MCNAPI_C void setLevelDataPointer_DEPRECATED(::std::shared_ptr<::LevelData> levelData);

    MCNAPI_C ~World();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Realms::World fromJson(::Json::Value const& json);

    MCNAPI_C static void gameRuleBoolToJson(::Json::Value& json, ::std::string const& name, bool value);

    MCNAPI_C static void gameRuleIntToJson(::Json::Value& json, ::std::string const& name, int value);

    MCNAPI_C static ::Realms::World::State stringToWorldState(::std::string const& stateString);

    MCNAPI_C static ::std::string worldStateToString(::Realms::World::State const& state);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::vector<::std::pair<::std::string, ::GameRuleId>> const& CHEAT_SETTING_RULES();

    MCNAPI_C static ::std::vector<::std::pair<bool, ::GameRuleId>> const& HARDCORE_SETTING_VALUES();

    MCNAPI_C static ::std::vector<::std::pair<::std::string, ::GameRuleId>> const& INT_SETTING_RULES();

    MCNAPI_C static ::std::vector<::std::pair<::std::string, ::GameRuleId>> const& WORLD_SETTING_RULES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::Realms::World&&);

    MCNAPI_C void* $ctor(::Realms::World const&);

    MCNAPI_C void* $ctor(bool valid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Realms
