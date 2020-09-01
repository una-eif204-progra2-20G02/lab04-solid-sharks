//
// Created by jeremy solis on 01-sep.-20.
//

#ifndef LAB04_SOLID_EMAILRECEIPTSENDER_H
#define LAB04_SOLID_EMAILRECEIPTSENDER_H

#include <sstream>
#include "IReceiptSender.h"

class EmailReceiptSender : public IReceiptSender {
    std::string sendReceipt() override;
};


#endif //LAB04_SOLID_EMAILRECEIPTSENDER_H
