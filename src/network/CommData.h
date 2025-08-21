#pragma once

#include <types.h>

class CommData {
public:
    CommData();
    u32 unk_0x4;
    u32 unk_0x8;

    virtual void Virt_0x0() {}
    virtual ~CommData() {}
    virtual void Virt_0x8();
    virtual void Virt_0xc();
};

class PacketCommData : public CommData {
public:
    PacketCommData();

    virtual void Virt_0x0() {}
    virtual ~PacketCommData() {}
    virtual void Virt_0xc();
};
