#ifndef __DBCC_FACTORY_H__
#define __DBCC_FACTORY_H__

#include "../dragonBones/DragonBonesHeaders.h"

NAME_SPACE_DRAGON_BONES_BEGIN
class DBCCFactory : public BaseFactory
{
public:
    DBCCFactory();
    virtual ~DBCCFactory();
    virtual void dispose(bool disposeData = true) override;
    
protected:
    virtual Armature *generateArmature(const ArmatureData *armatureData) const override;
    virtual Slot *generateSlot(const SlotData *slotData) const override;
    virtual void *generateDisplay(const ITextureAtlas *textureAtlas, const String &textureName, const DisplayData *displayData) const override;
    
private:
    DRAGON_BONES_DISALLOW_COPY_AND_ASSIGN(DBCCFactory);
};
NAME_SPACE_DRAGON_BONES_END

#endif  // __DBCC_FACTORY_H__