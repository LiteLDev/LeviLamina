//Extra Part For Tag.hpp
#ifdef EXTRA_INCLUDE_PART_TAG
// Include Headers or Declare Types Here
#include "../Global.h"
#include <map>
#include <string>
#include <vector>
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
class CompoundTag;

struct TagMemoryChunk {
    size_t capacity = 0;
    size_t size = 0;
    std::unique_ptr<uint8_t[]> data;

    TagMemoryChunk(size_t size, uint8_t data[])
        : capacity(size)
        , size(size)
        , data(data) {
    }

    TagMemoryChunk(const TagMemoryChunk& a1)
        : capacity(a1.capacity)
        , size(a1.size)
        , data(a1.data.get()) {
    }

    void operator=(const TagMemoryChunk& a1) {
        
    }
};

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
    Long,
    Float,
    Double,
    ByteArray,
    String,
    List,
    Compound,
};
//MCAPI static std::string getTagName(enum Tag::Type);
//MCAPI static std::unique_ptr<class Tag> newTag(enum Tag::Type);
//MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);
//MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);

LIAPI static Tag* createTag(Tag::Type t);
LIAPI char getTagType();

//value
LIAPI char& asByte();
LIAPI short& asShort();
LIAPI int& asInt();
LIAPI __int64& asLong();
LIAPI float& asFloat();
LIAPI double& asDouble();
LIAPI std::string& asString();
LIAPI std::vector<Tag*>& asList();
LIAPI std::map<std::string, Tag&>& asCompound();
LIAPI TagMemoryChunk& asByteArray();

//compound
//LIAPI void put(const std::string& k, Tag* v);
//LIAPI void putEnd(const std::string& k);
//LIAPI void putShort(const std::string& k, short v);
//LIAPI void putString(const std::string& k, std::string v);
//LIAPI void putInt(const std::string& k, int v);
//LIAPI void putLong(const std::string& k, __int64 v);
//LIAPI void putFloat(const std::string& k, float v);
//LIAPI void putDouble(const std::string& k, double v);
//LIAPI void putCompound(const std::string& k, Tag* v);
//LIAPI void putByte(const std::string& k, char v);
//LIAPI void putByteArray(const std::string& key, const TagMemoryChunk& value);
//LIAPI void putByteArray(const std::string& key, void* data, size_t size);
LIAPI void destroy();

//list

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
LIAPI static CompoundTag* fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian);

#endif
