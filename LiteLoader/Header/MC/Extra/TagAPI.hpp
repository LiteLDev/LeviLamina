//Extra Part For Tag.hpp
#ifdef EXTRA_INCLUDE_PART_TAG
// Include Headers or Declare Types Here
#include "../Global.h"
#include <map>
#include <string>
#include <vector>

class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;
class CompoundTagVariant;

//////////////// Json ////////////////
#include "../third-party/Nlohmann/fifo_map.hpp"
#include "../third-party/Nlohmann/json.hpp"

using namespace nlohmann;

template <class Key, class T, class dummy_compare, class Allocator>
using workaround_fifo_map = fifo_map<Key, T, fifo_map_compare<Key>, Allocator>;
using fifo_json = basic_json<workaround_fifo_map>;

#define JSON_NAMESPACE nlohmann
#define JSON_ROOT fifo_json
#define JSON_VALUE fifo_json

class Player;
class Actor;
class Block;
class ItemStack;
class BlockActor;

#else
// Add Member There
private:
char filler[0x28];

public:
enum Type : uint8_t {
    End,
    Byte,
    Short,
    Int,
    Int64,
    Float,
    Double,
    ByteArray,
    String,
    List,
    Compound,
    IntArray,
};
//MCAPI static std::string getTagName(enum Tag::Type);
//MCAPI static std::unique_ptr<class Tag> newTag(enum Tag::Type);
//MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);
//MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);

LIAPI static Tag* createTag(Tag::Type t);
LIAPI Type getTagType() const;

//value
//LIAPI char& asByte();
//LIAPI short& asShort();
//LIAPI int& asInt();
//LIAPI __int64& asLong();
//LIAPI float& asFloat();
//LIAPI double& asDouble();
//LIAPI std::string& asString();
//LIAPI std::vector<Tag*>& asList();
//LIAPI std::map<std::string, char[0x28]>& asCompound();
//LIAPI TagMemoryChunk& asByteArray();

inline ByteTag* asByteTag();
LIAPI ShortTag* asShortTag();
LIAPI IntTag* asIntTag();
LIAPI Int64Tag* asInt64Tag();
LIAPI FloatTag* asFloatTag();
LIAPI DoubleTag* asDoubleTag();
LIAPI StringTag* asStringTag();
LIAPI ListTag* asListTag();
LIAPI CompoundTag* asCompoundTag();
LIAPI ByteArrayTag* asByteArrayTag();
LIAPI IntArrayTag* asIntArrayTag();

LIAPI void destroy();

//static
LIAPI void setItem(ItemStack* item);
LIAPI void setBlock(Block* blk);
LIAPI bool setActor(Actor* actor);
LIAPI bool setPlayer(Player* actor);
LIAPI bool setBlockEntity(BlockActor* ble);
LIAPI static Tag* fromItem(ItemStack* item);
LIAPI static Tag* fromBlock(Block* blk);
LIAPI static Tag* fromActor(Actor* actor);
LIAPI static Tag* fromPlayer(Player* player);
LIAPI static Tag* fromBlockEntity(BlockActor* ble);

LIAPI std::string toJson(int formatIndent);
LIAPI std::string toSNBT();
LIAPI std::string toBinaryNBT(bool isLittleEndian = true);
LIAPI static CompoundTag* fromSNBT(const std::string& snbt);
LIAPI static CompoundTag* fromBinaryNBT(void* data, size_t len, bool isLittleEndian = true);
LIAPI static CompoundTag* fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian = true);

#endif
