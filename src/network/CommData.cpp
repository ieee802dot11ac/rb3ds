#include "CommData.h"

CommData::CommData() {
    unk_0x8 = 0;
    Virt_0xc();
}

void CommData::Virt_0x8() {}

PacketCommData::PacketCommData() { Virt_0xc(); }
