// Copyright eeGeo Ltd (2012-2016), All Rights Reserved

#pragma once

#include "IMenuReactionModel.h"
#include "BidirectionalBus.h"
#include "SearchResultPoiViewOpenedMessage.h"
#include "SearchResultPoiViewClosedMessage.h"

namespace ExampleApp
{
    namespace Menu
    {
        namespace View
        {
            class AndroidMenuReactionModel : public Menu::View::IMenuReactionModel
            {
            public:
                AndroidMenuReactionModel();

                ~AndroidMenuReactionModel();

                bool GetShouldCloseMenu() const;

                bool GetShouldOpenMenu() const;
            };
        }
    }
}
