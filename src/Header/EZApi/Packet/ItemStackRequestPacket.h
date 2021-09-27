#pragma once

#include "../Core/Packet.h"
#include "../dll.h"
#include <string>

enum ItemStackRequestActionType : uint8_t {
    Take,
    Place,
    Swap,
    Drop,
    Destroy,
    CraftConsumeInput,
    CraftMarkSecondaryResultSlot,
    LabTableCombine,
    BeaconPayment,
    MineBlock,
    CraftRecipe,
    CraftRecipeAuto,
    CreativeCreate,
    CraftRecipeOptional,
    CraftNonImplemented_Deprecated,
    CraftResults_Deprecated
};

class ItemStackRequestAction {
public:
    enum ItemStackRequestActionType actionType;

    MCAPI ItemStackRequestAction(enum ItemStackRequestActionType);

    virtual ~ItemStackRequestAction(){};

    MCAPI static std::unique_ptr<ItemStackRequestAction> read(ReadOnlyBinaryStream&);
    MCAPI static std::string                             getActionTypeName(enum ItemStackRequestActionType);

    MCAPI enum ItemStackRequestActionType getActionType(void) const;
};

class ItemStackRequestData {
public:
    int                                                  requestId;
    std::vector<std::string>                             filterStrings;
    std::vector<std::unique_ptr<ItemStackRequestAction>> actions;

    inline ItemStackRequestData() {
    }
    inline ~ItemStackRequestData() {
    }
    MCAPI void                                         write(BinaryStream&) const;
    MCAPI static std::unique_ptr<ItemStackRequestData> read(ReadOnlyBinaryStream&);

    int getRequestId() const {
        return this->requestId;
    }

    std::vector<std::string> getStringsToFilter() const {
        return this->filterStrings;
    }

    std::vector<std::unique_ptr<ItemStackRequestAction>> const& getActions() const {
        return this->actions;
    }
};

class ItemStackRequestBatch {
public:
    std::vector<std::unique_ptr<ItemStackRequestData>> requests;

    inline ItemStackRequestBatch() {
    }
    inline ~ItemStackRequestBatch() {
    }
    MCAPI void                                          write(BinaryStream&) const;
    MCAPI static std::unique_ptr<ItemStackRequestBatch> read(ReadOnlyBinaryStream&);

    std::vector<std::unique_ptr<ItemStackRequestData>> const& getRequests() const {
        return this->requests;
    }
};

class ItemStackRequestPacket : public Packet {
public:
    std::unique_ptr<ItemStackRequestBatch> batch;

    inline ItemStackRequestPacket();
    inline ~ItemStackRequestPacket() {
    }

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};