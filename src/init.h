// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2013  The NoirShares developer
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef NoirShares_INIT_H
#define NoirShares_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif
