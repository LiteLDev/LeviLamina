#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class Goal;
class Mob;
struct ConstDeserializeDataParams;
namespace Json { class Value; }
// clang-format on

struct LegacyGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk211430;
    ::ll::UntypedStorage<4, 4>   mUnk3bb680;
    ::ll::UntypedStorage<4, 4>   mUnk448c2a;
    ::ll::UntypedStorage<4, 4>   mUnk9bcfc0;
    ::ll::UntypedStorage<4, 4>   mUnkd284fd;
    ::ll::UntypedStorage<4, 4>   mUnkee7607;
    ::ll::UntypedStorage<1, 1>   mUnk1a9027;
    ::ll::UntypedStorage<4, 4>   mUnk65d988;
    ::ll::UntypedStorage<4, 4>   mUnk3fee3d;
    ::ll::UntypedStorage<4, 4>   mUnk292484;
    ::ll::UntypedStorage<4, 4>   mUnkabd824;
    ::ll::UntypedStorage<8, 24>  mUnkd04b87;
    ::ll::UntypedStorage<4, 4>   mUnk9f2490;
    ::ll::UntypedStorage<4, 4>   mUnk1deed7;
    ::ll::UntypedStorage<4, 4>   mUnk5d489f;
    ::ll::UntypedStorage<1, 1>   mUnk4ca832;
    ::ll::UntypedStorage<4, 4>   mUnk61e14c;
    ::ll::UntypedStorage<1, 1>   mUnka00832;
    ::ll::UntypedStorage<4, 4>   mUnk53e695;
    ::ll::UntypedStorage<4, 4>   mUnk850b3a;
    ::ll::UntypedStorage<1, 1>   mUnk40e677;
    ::ll::UntypedStorage<4, 4>   mUnkd28f65;
    ::ll::UntypedStorage<4, 4>   mUnk83ca69;
    ::ll::UntypedStorage<4, 4>   mUnkaa5b4f;
    ::ll::UntypedStorage<4, 4>   mUnk138b95;
    ::ll::UntypedStorage<4, 4>   mUnk537807;
    ::ll::UntypedStorage<4, 4>   mUnkcb90d3;
    ::ll::UntypedStorage<4, 4>   mUnk2f7807;
    ::ll::UntypedStorage<8, 64>  mUnkf69d52;
    ::ll::UntypedStorage<1, 1>   mUnk24320c;
    ::ll::UntypedStorage<4, 4>   mUnk8a7402;
    ::ll::UntypedStorage<4, 4>   mUnkd3c054;
    ::ll::UntypedStorage<4, 4>   mUnkd0d7bf;
    ::ll::UntypedStorage<4, 4>   mUnk7583fe;
    ::ll::UntypedStorage<8, 64>  mUnk44cd71;
    ::ll::UntypedStorage<4, 4>   mUnke468a5;
    ::ll::UntypedStorage<4, 4>   mUnkf81c80;
    ::ll::UntypedStorage<1, 1>   mUnk8a027d;
    ::ll::UntypedStorage<1, 1>   mUnk717134;
    ::ll::UntypedStorage<4, 4>   mUnke89439;
    ::ll::UntypedStorage<4, 4>   mUnkea77af;
    ::ll::UntypedStorage<4, 4>   mUnk294fdf;
    ::ll::UntypedStorage<4, 4>   mUnkede777;
    ::ll::UntypedStorage<4, 4>   mUnk29d8d8;
    ::ll::UntypedStorage<4, 4>   mUnk61a965;
    ::ll::UntypedStorage<4, 4>   mUnk2f1186;
    ::ll::UntypedStorage<4, 4>   mUnkf86557;
    ::ll::UntypedStorage<1, 1>   mUnkb4e347;
    ::ll::UntypedStorage<4, 4>   mUnk44270e;
    ::ll::UntypedStorage<8, 104> mUnkd9140b;
    ::ll::UntypedStorage<8, 104> mUnke589bf;
    ::ll::UntypedStorage<4, 4>   mUnk31fe50;
    ::ll::UntypedStorage<4, 4>   mUnkd538f7;
    ::ll::UntypedStorage<4, 4>   mUnkc3e683;
    ::ll::UntypedStorage<4, 4>   mUnkbc3680;
    ::ll::UntypedStorage<4, 4>   mUnke2adab;
    ::ll::UntypedStorage<1, 1>   mUnk6c6577;
    ::ll::UntypedStorage<4, 4>   mUnkfc033d;
    ::ll::UntypedStorage<1, 1>   mUnk5a3c84;
    ::ll::UntypedStorage<8, 104> mUnk66b42a;
    ::ll::UntypedStorage<4, 4>   mUnk1c0b2c;
    ::ll::UntypedStorage<4, 4>   mUnk874f0c;
    ::ll::UntypedStorage<4, 4>   mUnk288472;
    ::ll::UntypedStorage<8, 104> mUnkcd3d1c;
    ::ll::UntypedStorage<4, 4>   mUnk273881;
    ::ll::UntypedStorage<8, 208> mUnkf64f6e;
    ::ll::UntypedStorage<8, 104> mUnkf59c68;
    ::ll::UntypedStorage<4, 4>   mUnkeede67;
    ::ll::UntypedStorage<4, 4>   mUnk8499ed;
    ::ll::UntypedStorage<4, 4>   mUnk9cfca7;
    ::ll::UntypedStorage<4, 4>   mUnkd1219f;
    ::ll::UntypedStorage<4, 4>   mUnk7bdac4;
    ::ll::UntypedStorage<4, 4>   mUnkdfefcf;
    ::ll::UntypedStorage<4, 4>   mUnk805f15;
    ::ll::UntypedStorage<8, 176> mUnkbf5989;
    ::ll::UntypedStorage<4, 4>   mUnk2e0a99;
    ::ll::UntypedStorage<1, 1>   mUnk679194;
    ::ll::UntypedStorage<1, 1>   mUnk46605e;
    ::ll::UntypedStorage<8, 32>  mUnk7f7c32;
    ::ll::UntypedStorage<8, 24>  mUnkd2becf;
    ::ll::UntypedStorage<4, 4>   mUnk3924a9;
    ::ll::UntypedStorage<4, 4>   mUnk589592;
    ::ll::UntypedStorage<4, 4>   mUnke34152;
    ::ll::UntypedStorage<4, 4>   mUnk3145e9;
    ::ll::UntypedStorage<4, 4>   mUnk7de52d;
    ::ll::UntypedStorage<4, 4>   mUnk127c1c;
    ::ll::UntypedStorage<4, 4>   mUnk4a1bc2;
    ::ll::UntypedStorage<4, 4>   mUnkf4dbd8;
    ::ll::UntypedStorage<1, 1>   mUnk1f5af4;
    ::ll::UntypedStorage<4, 4>   mUnk9299c3;
    ::ll::UntypedStorage<1, 1>   mUnk3bfabb;
    ::ll::UntypedStorage<4, 4>   mUnkbc0d86;
    ::ll::UntypedStorage<4, 4>   mUnk3e989c;
    ::ll::UntypedStorage<4, 4>   mUnk65ddbf;
    ::ll::UntypedStorage<4, 4>   mUnk308044;
    ::ll::UntypedStorage<4, 4>   mUnk992dd4;
    ::ll::UntypedStorage<4, 4>   mUnk8f02c0;
    ::ll::UntypedStorage<4, 4>   mUnka54234;
    ::ll::UntypedStorage<4, 4>   mUnk750572;
    ::ll::UntypedStorage<4, 4>   mUnk5c3e31;
    ::ll::UntypedStorage<1, 1>   mUnk83dc97;
    bool                         mUnk11feb1 : 1;
    bool                         mUnkce2979 : 1;
    bool                         mUnk452182 : 1;
    bool                         mUnk1cf37b : 1;
    bool                         mUnk9a7b82 : 1;
    bool                         mUnkf6f4ce : 1;
    bool                         mUnkb9037f : 1;
    bool                         mUnk2c709d : 1;
    bool                         mUnkb93e77 : 1;
    ::ll::UntypedStorage<1, 1>   mUnk734569;
    ::ll::UntypedStorage<4, 4>   mUnk2d377c;
    ::ll::UntypedStorage<8, 24>  mUnk999df1;
    ::ll::UntypedStorage<1, 1>   mUnk2c6e04;
    ::ll::UntypedStorage<1, 1>   mUnkf60154;
    ::ll::UntypedStorage<8, 32>  mUnk1e24b6;
    ::ll::UntypedStorage<4, 4>   mUnkab3531;
    ::ll::UntypedStorage<4, 4>   mUnk234725;
    ::ll::UntypedStorage<4, 4>   mUnk496256;
    ::ll::UntypedStorage<4, 4>   mUnka91d44;
    ::ll::UntypedStorage<8, 24>  mUnk50a84a;
    ::ll::UntypedStorage<4, 4>   mUnk85d975;
    ::ll::UntypedStorage<1, 1>   mUnk9b1e32;
    ::ll::UntypedStorage<4, 8>   mUnk481b4b;
    ::ll::UntypedStorage<1, 1>   mUnk31fff8;
    ::ll::UntypedStorage<1, 1>   mUnk9613bb;
    ::ll::UntypedStorage<4, 8>   mUnk84e74f;
    ::ll::UntypedStorage<4, 4>   mUnk2a7812;
    ::ll::UntypedStorage<4, 8>   mUnk631470;
    ::ll::UntypedStorage<4, 4>   mUnk359a08;
    ::ll::UntypedStorage<4, 8>   mUnk6c8321;
    ::ll::UntypedStorage<4, 8>   mUnk7cdfdc;
    ::ll::UntypedStorage<4, 4>   mUnk88846f;
    ::ll::UntypedStorage<8, 24>  mUnkda7316;
    ::ll::UntypedStorage<4, 4>   mUnkbee08b;
    ::ll::UntypedStorage<4, 4>   mUnk8a2245;
    ::ll::UntypedStorage<4, 4>   mUnk2c3fa2;
    ::ll::UntypedStorage<4, 4>   mUnkacfb1e;
    ::ll::UntypedStorage<4, 4>   mUnk912a9a;
    ::ll::UntypedStorage<1, 1>   mUnkd0fdc9;
    ::ll::UntypedStorage<4, 4>   mUnk148dfe;
    ::ll::UntypedStorage<4, 4>   mUnkbc73c5;
    ::ll::UntypedStorage<4, 4>   mUnk38e9ee;
    ::ll::UntypedStorage<8, 24>  mUnk22af74;
    ::ll::UntypedStorage<4, 4>   mUnk8ff04d;
    ::ll::UntypedStorage<4, 4>   mUnkde4afd;
    ::ll::UntypedStorage<1, 1>   mUnka16ce0;
    ::ll::UntypedStorage<1, 1>   mUnk36ebe6;
    ::ll::UntypedStorage<1, 1>   mUnkd7ae41;
    ::ll::UntypedStorage<4, 4>   mUnke43cb1;
    ::ll::UntypedStorage<8, 24>  mUnk7a58e2;
    ::ll::UntypedStorage<4, 4>   mUnk408602;
    ::ll::UntypedStorage<4, 4>   mUnk26f8e0;
    ::ll::UntypedStorage<8, 32>  mUnkf14585;
    ::ll::UntypedStorage<4, 4>   mUnk64ff72;
    ::ll::UntypedStorage<4, 4>   mUnk6f8d8d;
    ::ll::UntypedStorage<4, 4>   mUnk36c84a;
    ::ll::UntypedStorage<4, 4>   mUnkc4ff0a;
    ::ll::UntypedStorage<4, 4>   mUnk85940c;
    ::ll::UntypedStorage<4, 4>   mUnkb3b793;
    ::ll::UntypedStorage<4, 4>   mUnk48e803;
    ::ll::UntypedStorage<8, 32>  mUnkae1aaf;
    ::ll::UntypedStorage<8, 32>  mUnk322d98;
    ::ll::UntypedStorage<4, 4>   mUnke54f6e;
    ::ll::UntypedStorage<8, 32>  mUnkee0750;
    ::ll::UntypedStorage<8, 104> mUnk1f51a9;
    ::ll::UntypedStorage<4, 4>   mUnk84bccf;
    ::ll::UntypedStorage<4, 4>   mUnkbe4391;
    ::ll::UntypedStorage<4, 4>   mUnk584ec8;
    ::ll::UntypedStorage<1, 1>   mUnkae285e;
    ::ll::UntypedStorage<1, 1>   mUnk54dad7;
    ::ll::UntypedStorage<4, 4>   mUnk71be8f;
    ::ll::UntypedStorage<4, 4>   mUnk3f6cf6;
    ::ll::UntypedStorage<4, 4>   mUnk3ad344;
    ::ll::UntypedStorage<4, 4>   mUnk3b5f32;
    ::ll::UntypedStorage<8, 64>  mUnk798094;
    ::ll::UntypedStorage<8, 64>  mUnk2abd90;
    ::ll::UntypedStorage<4, 4>   mUnka1e765;
    ::ll::UntypedStorage<4, 4>   mUnk62efd2;
    ::ll::UntypedStorage<4, 4>   mUnkda3fd9;
    ::ll::UntypedStorage<4, 4>   mUnk2f607f;
    ::ll::UntypedStorage<4, 4>   mUnk836b2a;
    ::ll::UntypedStorage<8, 176> mUnkf1528f;
    ::ll::UntypedStorage<4, 4>   mUnk84466a;
    ::ll::UntypedStorage<1, 1>   mUnka16f55;
    ::ll::UntypedStorage<1, 1>   mUnkf86f8a;
    ::ll::UntypedStorage<4, 4>   mUnk1b5e04;
    ::ll::UntypedStorage<1, 1>   mUnkea7906;
    ::ll::UntypedStorage<1, 1>   mUnka15406;
    ::ll::UntypedStorage<8, 24>  mUnk717eca;
    ::ll::UntypedStorage<1, 1>   mUnkda6a30;
    ::ll::UntypedStorage<8, 32>  mUnkc76ab7;
    ::ll::UntypedStorage<4, 8>   mUnk9a3b14;
    ::ll::UntypedStorage<8, 104> mUnkff5c27;
    ::ll::UntypedStorage<8, 104> mUnk8b3189;
    ::ll::UntypedStorage<4, 4>   mUnk79a994;
    ::ll::UntypedStorage<4, 4>   mUnka5f7e0;
    ::ll::UntypedStorage<4, 4>   mUnk52033c;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyGoalDefinition();

    MCNAPI LegacyGoalDefinition(::LegacyGoalDefinition const&);

    MCNAPI LegacyGoalDefinition(::LegacyGoalDefinition&&);

    MCNAPI ::LegacyGoalDefinition& operator=(::LegacyGoalDefinition&&);

    MCNAPI ::LegacyGoalDefinition& operator=(::LegacyGoalDefinition const&);

    MCNAPI bool parse(::ConstDeserializeDataParams const& deserializeDataParams, int priority);

    MCNAPI ~LegacyGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _controlFlagsFromArr(::Json::Value const& flags);

    MCNAPI static ::POIType _getPOITypeFromString(::std::string poiStr);

    MCNAPI static ::std::vector<::SharedTypes::Legacy::ActorDamageCause>
    _getPanicGoalDamageSources(::ConstDeserializeDataParams const& deserializeDataParams);

    MCNAPI static ::TargetSelectionMethod _getTargetSelectionMethodFromString(::std::string const& methodStr);

    MCNAPI static bool goalExists(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::
        unordered_map<::std::string, ::std::function<::std::unique_ptr<::Goal>(::Mob&, ::LegacyGoalDefinition const&)>>&
        mGoalMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LegacyGoalDefinition const&);

    MCNAPI void* $ctor(::LegacyGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
