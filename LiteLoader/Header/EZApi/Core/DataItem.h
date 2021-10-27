#pragma once

#include <cstdint>
#include <memory>
#include <string>

#include "../Math/BlockPos.h"
#include "../Math/Vec3.h"
#include "../dll.h"
#include "NBT.h"

enum class DataItemType : unsigned char { BYTE,
                                          SHORT,
                                          INT,
                                          FLOAT,
                                          STRING,
                                          NBT,
                                          POS,
                                          LONG,
                                          VEC3 };

namespace DataTypeMap {

template <typename T>
DataItemType typeFor;

template <>
inline DataItemType typeFor<int8_t> = DataItemType::BYTE;
template <>
inline DataItemType typeFor<int16_t> = DataItemType::SHORT;
template <>
inline DataItemType typeFor<int32_t> = DataItemType::INT;
template <>
inline DataItemType typeFor<float> = DataItemType::FLOAT;
template <>
inline DataItemType typeFor<std::string> = DataItemType::STRING;
template <>
inline DataItemType typeFor<CompoundTag> = DataItemType::NBT;
template <>
inline DataItemType typeFor<BlockPos> = DataItemType::POS;
template <>
inline DataItemType typeFor<int64_t> = DataItemType::LONG;
template <>
inline DataItemType typeFor<Vec3> = DataItemType::VEC3;

template <typename T>
struct neqFor {
    static bool neq(T const& lhs, T const& rhs) {
        return lhs != rhs;
    }
};
template <typename T>
struct copyFor {
    static void copy(T& lhs, T const& rhs) {
        lhs = rhs;
    }
};

} // namespace DataTypeMap

namespace ActorDataIDs {
inline constexpr int16_t FLAGS                               = 0;  // LONG
inline constexpr int16_t HEALTH                              = 1;  // INT (minecart/boat)
inline constexpr int16_t VARIANT                             = 2;  // INT
inline constexpr int16_t COLOR                               = 3;  // BYTE
inline constexpr int16_t NAMETAG                             = 4;  // STRING
inline constexpr int16_t OWNER                               = 5;  // LONG
inline constexpr int16_t TARGET                              = 6;  // LONG
inline constexpr int16_t AIR                                 = 7;  // SHORT
inline constexpr int16_t POTION_COLOR                        = 8;  // INT (ARGB!)
inline constexpr int16_t POTION_AMBIENT                      = 9;  // BYTE
inline constexpr int16_t JUMP_DURATION                       = 10; // LONG
inline constexpr int16_t HURT_TIME                           = 11; // INT (minecart/boat)
inline constexpr int16_t HURT_DIRECTION                      = 12; // INT (minecart/boat)
inline constexpr int16_t PADDLE_TIME_LEFT                    = 13; // FLOAT
inline constexpr int16_t PADDLE_TIME_RIGHT                   = 14; // FLOAT
inline constexpr int16_t EXPERIENCE_VALUE                    = 15; // INT (xp orb)
inline constexpr int16_t DISPLAY_ITEM                        = 16; // INT (id | (data << 16))
inline constexpr int16_t HORSE_FLAGS                         = 16; // INT
inline constexpr int16_t WITHER_SKULL_IS_DANGEROUS           = 16; // BYTE
inline constexpr int16_t MINECART_DISPLAY_OFFSET             = 17; // INT
inline constexpr int16_t ARROW_SHOOTER_ID                    = 17; // LONG
inline constexpr int16_t MINECART_HAS_DISPLAY                = 18; // BYTE (must be 1 for minecart to show block inside)
inline constexpr int16_t HORSE_TYPE                          = 19;
inline constexpr int16_t SWELL                               = 19;
inline constexpr int16_t OLD_SWELL                           = 20;
inline constexpr int16_t SWELL_DIR                           = 21;
inline constexpr int16_t CHARGE_AMOUNT                       = 22;
inline constexpr int16_t ENDERMAN_HELD_RUNTIME_ID            = 23; // SHORT
inline constexpr int16_t ACTOR_AGE                           = 24; // SHORT
inline constexpr int16_t PLAYER_FLAGS                        = 26; // BYTE
inline constexpr int16_t PLAYER_INDEX                        = 27;
inline constexpr int16_t PLAYER_BED_POSITION                 = 28; // POS
inline constexpr int16_t FIREBALL_POWER_X                    = 29; // FLOAT
inline constexpr int16_t FIREBALL_POWER_Y                    = 30; // FLOAT
inline constexpr int16_t FIREBALL_POWER_Z                    = 31; // FLOAT
inline constexpr int16_t AUX_POWER                           = 32;
inline constexpr int16_t FISH_X                              = 33;
inline constexpr int16_t FISH_Z                              = 34;
inline constexpr int16_t FISH_ANGLE                          = 35;
inline constexpr int16_t POTION_AUX_VALUE                    = 36; // SHORT
inline constexpr int16_t LEAD_HOLDER                         = 37; // LONG
inline constexpr int16_t SCALE                               = 38; // FLOAT
inline constexpr int16_t INTERACTIVE_TAG                     = 39; // STRING
inline constexpr int16_t NPC_SKIN_ID                         = 40; // STRING
inline constexpr int16_t URL_TAG                             = 41; // STRING
inline constexpr int16_t MAX_AIR                             = 42; // SHORT
inline constexpr int16_t MARK_VARIANT                        = 43; // INT
inline constexpr int16_t CONTAINER_TYPE                      = 44; // BYTE
inline constexpr int16_t CONTAINER_BASE_SIZE                 = 45; // INT
inline constexpr int16_t CONTAINER_EXTRA_SLOTS_PER_STRENGTH  = 46; // INT
inline constexpr int16_t BLOCK_TARGET                        = 47; // POS (ENDER CRYSTAL)
inline constexpr int16_t WITHER_INVULNERABLE_TICKS           = 48; // INT
inline constexpr int16_t WITHER_TARGET_1                     = 49; // LONG
inline constexpr int16_t WITHER_TARGET_2                     = 50; // LONG
inline constexpr int16_t WITHER_TARGET_3                     = 51; // LONG
inline constexpr int16_t AERIAL_ATTACK                       = 52;
inline constexpr int16_t BOUNDING_BOX_WIDTH                  = 53; // FLOAT
inline constexpr int16_t BOUNDING_BOX_HEIGHT                 = 54; // FLOAT
inline constexpr int16_t FUSE_LENGTH                         = 55; // INT
inline constexpr int16_t RIDER_SEAT_POSITION                 = 56; // VEC3
inline constexpr int16_t RIDER_ROTATION_LOCKED               = 57; // BYTE
inline constexpr int16_t RIDER_MAX_ROTATION                  = 58; // FLOAT
inline constexpr int16_t RIDER_MIN_ROTATION                  = 59; // FLOAT
inline constexpr int16_t AREA_EFFECT_CLOUD_RADIUS            = 61; // FLOAT
inline constexpr int16_t AREA_EFFECT_CLOUD_WAITING           = 62; // INT
inline constexpr int16_t AREA_EFFECT_CLOUD_PARTICLE_ID       = 63; // INT
inline constexpr int16_t SHULKER_PEEK_ID                     = 64; // INT
inline constexpr int16_t SHULKER_ATTACH_FACE                 = 65; // BYTE
inline constexpr int16_t SHULKER_ATTACHED                    = 66; // SHORT
inline constexpr int16_t SHULKER_ATTACH_POS                  = 67; // POS
inline constexpr int16_t TRADING_PLAYER_EID                  = 68; // LONG
inline constexpr int16_t TRADING_CAREER                      = 69;
inline constexpr int16_t HAS_COMMAND_BLOCK                   = 70;
inline constexpr int16_t COMMAND_BLOCK_COMMAND               = 71; // STRING
inline constexpr int16_t COMMAND_BLOCK_LAST_OUTPUT           = 72; // STRING
inline constexpr int16_t COMMAND_BLOCK_TRACK_OUTPUT          = 73; // BYTE
inline constexpr int16_t CONTROLLING_RIDER_SEAT_NUMBER       = 74; // BYTE
inline constexpr int16_t STRENGTH                            = 75; // INT
inline constexpr int16_t MAX_STRENGTH                        = 76; // INT
inline constexpr int16_t SPELL_CASTING_COLOR                 = 77; // INT
inline constexpr int16_t LIMITED_LIFE                        = 78;
inline constexpr int16_t ARMOR_STAND_POSE_INDEX              = 79; // INT
inline constexpr int16_t ENDER_CRYSTAL_TIME_OFFSET           = 80; // INT
inline constexpr int16_t ALWAYS_SHOW_NAMETAG                 = 81; // BYTE
inline constexpr int16_t COLOR_2                             = 82; // BYTE
inline constexpr int16_t NAME_AUTHOR                         = 83;
inline constexpr int16_t SCORE_TAG                           = 84; // STRING
inline constexpr int16_t BALLOON_ATTACHED_ENTITY             = 85; // LONG
inline constexpr int16_t PUFFERFISH_SIZE                     = 86;
inline constexpr int16_t BUBBLE_TIME                         = 87;
inline constexpr int16_t AGENT                               = 88;
inline constexpr int16_t SITTING_AMOUNT                      = 89;
inline constexpr int16_t SITTING_AMOUNT_PREVIOUS             = 90;
inline constexpr int16_t EATING_COUNTER                      = 91;
inline constexpr int16_t FLAGS_EXTENDED                      = 92;
inline constexpr int16_t LAYING_AMOUNT                       = 93;
inline constexpr int16_t LAYING_AMOUNT_PREVIOUS              = 94;
inline constexpr int16_t DURATION                            = 95;
inline constexpr int16_t SPAWN_TIME                          = 96;
inline constexpr int16_t CHANGE_RATE                         = 97;
inline constexpr int16_t CHANGE_ON_PICKUP                    = 98;
inline constexpr int16_t PICKUP_COUNT                        = 99;
inline constexpr int16_t INTERACT_TEXT                       = 100;
inline constexpr int16_t TRADE_TIER                          = 101;
inline constexpr int16_t MAX_TRADE_TIER                      = 102;
inline constexpr int16_t TRADE_EXPERIENCE                    = 103;
inline constexpr int16_t SKIN_ID                             = 104; // INT
inline constexpr int16_t SPAWNING_FRAMES                     = 105;
inline constexpr int16_t COMMAND_BLOCK_TICK_DELAY            = 106;
inline constexpr int16_t COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 107;
inline constexpr int16_t AMBIENT_SOUND_INTERVAL              = 108;
/*inline constexpr int16_t AMBIENT_SOUND_EVENT_NAME            = 109;
inline constexpr int16_t FALL_DAMAGE_MULTIPLIER              = 110;
inline constexpr int16_t NAME_RAW_TEXT                       = 111;
inline constexpr int16_t CAN_RIDE_TARGET                     = 112;*/
} // namespace ActorDataIDs

class DataItem {
public:
    DataItemType type;
    uint16_t     id;
    bool         dirty;

    DataItem(DataItemType type, uint16_t id, bool dirty)
        : type(type)
        , id(id)
        , dirty(dirty) {
    }

    virtual ~DataItem() {
    }
    virtual MCAPI bool                isDataEqual(DataItem const& rhs) const;
    virtual std::unique_ptr<DataItem> clone() const = 0;

    inline void setDirty() {
        dirty = true;
    }
    inline uint16_t getId() const {
        return id;
    }
};

template <typename T>
class DataItem2 : public DataItem {
public:
    T value;
    DataItem2(uint16_t id, T const& value)
        : DataItem(DataTypeMap::typeFor<T>, id, true)
        , value(value) {
    }
    MCAPI std::unique_ptr<DataItem> clone() const override;
};

template <>
class DataItem2<int8_t> : public DataItem {
public:
    int8_t value;
    DataItem2(uint16_t id, int8_t const& value)
        : DataItem(DataTypeMap::typeFor<int8_t>, id, true)
        , value(value) {
    }
    MCAPI std::unique_ptr<DataItem> clone() const override;

    inline bool getFlag(int32_t bit) const {
        return (1 << bit) & value;
    }
    inline void setFlag(int32_t bit) {
        value |= 1 << bit;
    }
    inline void clearFlag(int32_t bit) {
        value &= ~(1 << bit);
    }
};

template <>
class DataItem2<int64_t> : public DataItem {
public:
    int64_t value;
    DataItem2(uint16_t id, int64_t const& value)
        : DataItem(DataTypeMap::typeFor<int64_t>, id, true)
        , value(value) {
    }
    MCAPI std::unique_ptr<DataItem> clone() const override;

    inline bool getFlag(int32_t bit) const {
        return (1LL << bit) & value;
    }
    inline void setFlag(int32_t bit) {
        value |= 1LL << bit;
    }
    inline void clearFlag(int32_t bit) {
        value &= ~(1LL << bit);
    }
};