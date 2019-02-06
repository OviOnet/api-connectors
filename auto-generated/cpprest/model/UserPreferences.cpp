/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "UserPreferences.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UserPreferences::UserPreferences()
{
    m_AlertOnLiquidations = false;
    m_AlertOnLiquidationsIsSet = false;
    m_AnimationsEnabled = false;
    m_AnimationsEnabledIsSet = false;
    m_AnnouncementsLastSeen = utility::datetime();
    m_AnnouncementsLastSeenIsSet = false;
    m_ChatChannelID = 0.0;
    m_ChatChannelIDIsSet = false;
    m_ColorTheme = utility::conversions::to_string_t("");
    m_ColorThemeIsSet = false;
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Debug = false;
    m_DebugIsSet = false;
    m_DisableEmailsIsSet = false;
    m_HideConfirmDialogsIsSet = false;
    m_HideConnectionModal = false;
    m_HideConnectionModalIsSet = false;
    m_HideFromLeaderboard = false;
    m_HideFromLeaderboardIsSet = false;
    m_HideNameFromLeaderboard = false;
    m_HideNameFromLeaderboardIsSet = false;
    m_HideNotificationsIsSet = false;
    m_Locale = utility::conversions::to_string_t("");
    m_LocaleIsSet = false;
    m_MsgsSeenIsSet = false;
    m_OrderBookBinningIsSet = false;
    m_OrderBookType = utility::conversions::to_string_t("");
    m_OrderBookTypeIsSet = false;
    m_OrderClearImmediate = false;
    m_OrderClearImmediateIsSet = false;
    m_OrderControlsPlusMinus = false;
    m_OrderControlsPlusMinusIsSet = false;
    m_ShowLocaleNumbers = false;
    m_ShowLocaleNumbersIsSet = false;
    m_SoundsIsSet = false;
    m_StrictIPCheck = false;
    m_StrictIPCheckIsSet = false;
    m_StrictTimeout = false;
    m_StrictTimeoutIsSet = false;
    m_TickerGroup = utility::conversions::to_string_t("");
    m_TickerGroupIsSet = false;
    m_TickerPinned = false;
    m_TickerPinnedIsSet = false;
    m_TradeLayout = utility::conversions::to_string_t("");
    m_TradeLayoutIsSet = false;
}

UserPreferences::~UserPreferences()
{
}

void UserPreferences::validate()
{
    // TODO: implement validation
}

web::json::value UserPreferences::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AlertOnLiquidationsIsSet)
    {
        val[utility::conversions::to_string_t("alertOnLiquidations")] = ModelBase::toJson(m_AlertOnLiquidations);
    }
    if(m_AnimationsEnabledIsSet)
    {
        val[utility::conversions::to_string_t("animationsEnabled")] = ModelBase::toJson(m_AnimationsEnabled);
    }
    if(m_AnnouncementsLastSeenIsSet)
    {
        val[utility::conversions::to_string_t("announcementsLastSeen")] = ModelBase::toJson(m_AnnouncementsLastSeen);
    }
    if(m_ChatChannelIDIsSet)
    {
        val[utility::conversions::to_string_t("chatChannelID")] = ModelBase::toJson(m_ChatChannelID);
    }
    if(m_ColorThemeIsSet)
    {
        val[utility::conversions::to_string_t("colorTheme")] = ModelBase::toJson(m_ColorTheme);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_DebugIsSet)
    {
        val[utility::conversions::to_string_t("debug")] = ModelBase::toJson(m_Debug);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisableEmails )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("disableEmails")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HideConfirmDialogs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("hideConfirmDialogs")] = web::json::value::array(jsonArray);
        }
    }
    if(m_HideConnectionModalIsSet)
    {
        val[utility::conversions::to_string_t("hideConnectionModal")] = ModelBase::toJson(m_HideConnectionModal);
    }
    if(m_HideFromLeaderboardIsSet)
    {
        val[utility::conversions::to_string_t("hideFromLeaderboard")] = ModelBase::toJson(m_HideFromLeaderboard);
    }
    if(m_HideNameFromLeaderboardIsSet)
    {
        val[utility::conversions::to_string_t("hideNameFromLeaderboard")] = ModelBase::toJson(m_HideNameFromLeaderboard);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HideNotifications )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("hideNotifications")] = web::json::value::array(jsonArray);
        }
    }
    if(m_LocaleIsSet)
    {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_Locale);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MsgsSeen )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("msgsSeen")] = web::json::value::array(jsonArray);
        }
    }
    if(m_OrderBookBinningIsSet)
    {
        val[utility::conversions::to_string_t("orderBookBinning")] = ModelBase::toJson(m_OrderBookBinning);
    }
    if(m_OrderBookTypeIsSet)
    {
        val[utility::conversions::to_string_t("orderBookType")] = ModelBase::toJson(m_OrderBookType);
    }
    if(m_OrderClearImmediateIsSet)
    {
        val[utility::conversions::to_string_t("orderClearImmediate")] = ModelBase::toJson(m_OrderClearImmediate);
    }
    if(m_OrderControlsPlusMinusIsSet)
    {
        val[utility::conversions::to_string_t("orderControlsPlusMinus")] = ModelBase::toJson(m_OrderControlsPlusMinus);
    }
    if(m_ShowLocaleNumbersIsSet)
    {
        val[utility::conversions::to_string_t("showLocaleNumbers")] = ModelBase::toJson(m_ShowLocaleNumbers);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sounds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("sounds")] = web::json::value::array(jsonArray);
        }
    }
    if(m_StrictIPCheckIsSet)
    {
        val[utility::conversions::to_string_t("strictIPCheck")] = ModelBase::toJson(m_StrictIPCheck);
    }
    if(m_StrictTimeoutIsSet)
    {
        val[utility::conversions::to_string_t("strictTimeout")] = ModelBase::toJson(m_StrictTimeout);
    }
    if(m_TickerGroupIsSet)
    {
        val[utility::conversions::to_string_t("tickerGroup")] = ModelBase::toJson(m_TickerGroup);
    }
    if(m_TickerPinnedIsSet)
    {
        val[utility::conversions::to_string_t("tickerPinned")] = ModelBase::toJson(m_TickerPinned);
    }
    if(m_TradeLayoutIsSet)
    {
        val[utility::conversions::to_string_t("tradeLayout")] = ModelBase::toJson(m_TradeLayout);
    }

    return val;
}

void UserPreferences::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("alertOnLiquidations")))
    {
        setAlertOnLiquidations(ModelBase::boolFromJson(val[utility::conversions::to_string_t("alertOnLiquidations")]));
    }
    if(val.has_field(utility::conversions::to_string_t("animationsEnabled")))
    {
        setAnimationsEnabled(ModelBase::boolFromJson(val[utility::conversions::to_string_t("animationsEnabled")]));
    }
    if(val.has_field(utility::conversions::to_string_t("announcementsLastSeen")))
    {
        setAnnouncementsLastSeen(ModelBase::dateFromJson(val[utility::conversions::to_string_t("announcementsLastSeen")]));
    }
    if(val.has_field(utility::conversions::to_string_t("chatChannelID")))
    {
        setChatChannelID(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("chatChannelID")]));
    }
    if(val.has_field(utility::conversions::to_string_t("colorTheme")))
    {
        setColorTheme(ModelBase::stringFromJson(val[utility::conversions::to_string_t("colorTheme")]));
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromJson(val[utility::conversions::to_string_t("currency")]));
    }
    if(val.has_field(utility::conversions::to_string_t("debug")))
    {
        setDebug(ModelBase::boolFromJson(val[utility::conversions::to_string_t("debug")]));
    }
    {
        m_DisableEmails.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("disableEmails")))
        {
        for( auto& item : val[utility::conversions::to_string_t("disableEmails")].as_array() )
        {
            m_DisableEmails.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_HideConfirmDialogs.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("hideConfirmDialogs")))
        {
        for( auto& item : val[utility::conversions::to_string_t("hideConfirmDialogs")].as_array() )
        {
            m_HideConfirmDialogs.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hideConnectionModal")))
    {
        setHideConnectionModal(ModelBase::boolFromJson(val[utility::conversions::to_string_t("hideConnectionModal")]));
    }
    if(val.has_field(utility::conversions::to_string_t("hideFromLeaderboard")))
    {
        setHideFromLeaderboard(ModelBase::boolFromJson(val[utility::conversions::to_string_t("hideFromLeaderboard")]));
    }
    if(val.has_field(utility::conversions::to_string_t("hideNameFromLeaderboard")))
    {
        setHideNameFromLeaderboard(ModelBase::boolFromJson(val[utility::conversions::to_string_t("hideNameFromLeaderboard")]));
    }
    {
        m_HideNotifications.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("hideNotifications")))
        {
        for( auto& item : val[utility::conversions::to_string_t("hideNotifications")].as_array() )
        {
            m_HideNotifications.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locale")))
    {
        setLocale(ModelBase::stringFromJson(val[utility::conversions::to_string_t("locale")]));
    }
    {
        m_MsgsSeen.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("msgsSeen")))
        {
        for( auto& item : val[utility::conversions::to_string_t("msgsSeen")].as_array() )
        {
            m_MsgsSeen.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderBookBinning")))
    {
        if(!val[utility::conversions::to_string_t("orderBookBinning")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[utility::conversions::to_string_t("orderBookBinning")]);
            setOrderBookBinning( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderBookType")))
    {
        setOrderBookType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("orderBookType")]));
    }
    if(val.has_field(utility::conversions::to_string_t("orderClearImmediate")))
    {
        setOrderClearImmediate(ModelBase::boolFromJson(val[utility::conversions::to_string_t("orderClearImmediate")]));
    }
    if(val.has_field(utility::conversions::to_string_t("orderControlsPlusMinus")))
    {
        setOrderControlsPlusMinus(ModelBase::boolFromJson(val[utility::conversions::to_string_t("orderControlsPlusMinus")]));
    }
    if(val.has_field(utility::conversions::to_string_t("showLocaleNumbers")))
    {
        setShowLocaleNumbers(ModelBase::boolFromJson(val[utility::conversions::to_string_t("showLocaleNumbers")]));
    }
    {
        m_Sounds.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("sounds")))
        {
        for( auto& item : val[utility::conversions::to_string_t("sounds")].as_array() )
        {
            m_Sounds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strictIPCheck")))
    {
        setStrictIPCheck(ModelBase::boolFromJson(val[utility::conversions::to_string_t("strictIPCheck")]));
    }
    if(val.has_field(utility::conversions::to_string_t("strictTimeout")))
    {
        setStrictTimeout(ModelBase::boolFromJson(val[utility::conversions::to_string_t("strictTimeout")]));
    }
    if(val.has_field(utility::conversions::to_string_t("tickerGroup")))
    {
        setTickerGroup(ModelBase::stringFromJson(val[utility::conversions::to_string_t("tickerGroup")]));
    }
    if(val.has_field(utility::conversions::to_string_t("tickerPinned")))
    {
        setTickerPinned(ModelBase::boolFromJson(val[utility::conversions::to_string_t("tickerPinned")]));
    }
    if(val.has_field(utility::conversions::to_string_t("tradeLayout")))
    {
        setTradeLayout(ModelBase::stringFromJson(val[utility::conversions::to_string_t("tradeLayout")]));
    }
}

void UserPreferences::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_AlertOnLiquidationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertOnLiquidations"), m_AlertOnLiquidations));
    }
    if(m_AnimationsEnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("animationsEnabled"), m_AnimationsEnabled));
    }
    if(m_AnnouncementsLastSeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("announcementsLastSeen"), m_AnnouncementsLastSeen));
        
    }
    if(m_ChatChannelIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("chatChannelID"), m_ChatChannelID));
    }
    if(m_ColorThemeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("colorTheme"), m_ColorTheme));
        
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_DebugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("debug"), m_Debug));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisableEmails )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disableEmails"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HideConfirmDialogs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hideConfirmDialogs"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_HideConnectionModalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hideConnectionModal"), m_HideConnectionModal));
    }
    if(m_HideFromLeaderboardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hideFromLeaderboard"), m_HideFromLeaderboard));
    }
    if(m_HideNameFromLeaderboardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hideNameFromLeaderboard"), m_HideNameFromLeaderboard));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HideNotifications )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hideNotifications"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_LocaleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locale"), m_Locale));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MsgsSeen )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("msgsSeen"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_OrderBookBinningIsSet)
    {
        if (m_OrderBookBinning.get())
        {
            m_OrderBookBinning->toMultipart(multipart, utility::conversions::to_string_t("orderBookBinning."));
        }
        
    }
    if(m_OrderBookTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orderBookType"), m_OrderBookType));
        
    }
    if(m_OrderClearImmediateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orderClearImmediate"), m_OrderClearImmediate));
    }
    if(m_OrderControlsPlusMinusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orderControlsPlusMinus"), m_OrderControlsPlusMinus));
    }
    if(m_ShowLocaleNumbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("showLocaleNumbers"), m_ShowLocaleNumbers));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sounds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sounds"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_StrictIPCheckIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("strictIPCheck"), m_StrictIPCheck));
    }
    if(m_StrictTimeoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("strictTimeout"), m_StrictTimeout));
    }
    if(m_TickerGroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tickerGroup"), m_TickerGroup));
        
    }
    if(m_TickerPinnedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tickerPinned"), m_TickerPinned));
    }
    if(m_TradeLayoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tradeLayout"), m_TradeLayout));
        
    }
}

void UserPreferences::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("alertOnLiquidations")))
    {
        setAlertOnLiquidations(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertOnLiquidations"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("animationsEnabled")))
    {
        setAnimationsEnabled(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("animationsEnabled"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("announcementsLastSeen")))
    {
        setAnnouncementsLastSeen(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("announcementsLastSeen"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("chatChannelID")))
    {
        setChatChannelID(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("chatChannelID"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("colorTheme")))
    {
        setColorTheme(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("colorTheme"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("debug")))
    {
        setDebug(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("debug"))));
    }
    {
        m_DisableEmails.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("disableEmails")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("disableEmails"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_DisableEmails.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_HideConfirmDialogs.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("hideConfirmDialogs")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("hideConfirmDialogs"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_HideConfirmDialogs.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hideConnectionModal")))
    {
        setHideConnectionModal(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("hideConnectionModal"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hideFromLeaderboard")))
    {
        setHideFromLeaderboard(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("hideFromLeaderboard"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hideNameFromLeaderboard")))
    {
        setHideNameFromLeaderboard(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("hideNameFromLeaderboard"))));
    }
    {
        m_HideNotifications.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("hideNotifications")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("hideNotifications"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_HideNotifications.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("locale")))
    {
        setLocale(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locale"))));
    }
    {
        m_MsgsSeen.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("msgsSeen")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("msgsSeen"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_MsgsSeen.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orderBookBinning")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("orderBookBinning")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("orderBookBinning."));
            setOrderBookBinning( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orderBookType")))
    {
        setOrderBookType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("orderBookType"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orderClearImmediate")))
    {
        setOrderClearImmediate(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("orderClearImmediate"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orderControlsPlusMinus")))
    {
        setOrderControlsPlusMinus(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("orderControlsPlusMinus"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("showLocaleNumbers")))
    {
        setShowLocaleNumbers(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("showLocaleNumbers"))));
    }
    {
        m_Sounds.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("sounds")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sounds"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Sounds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("strictIPCheck")))
    {
        setStrictIPCheck(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("strictIPCheck"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("strictTimeout")))
    {
        setStrictTimeout(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("strictTimeout"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tickerGroup")))
    {
        setTickerGroup(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tickerGroup"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tickerPinned")))
    {
        setTickerPinned(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tickerPinned"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tradeLayout")))
    {
        setTradeLayout(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tradeLayout"))));
    }
}

bool UserPreferences::isAlertOnLiquidations() const
{
    return m_AlertOnLiquidations;
}


void UserPreferences::setAlertOnLiquidations(bool value)
{
    m_AlertOnLiquidations = value;
    m_AlertOnLiquidationsIsSet = true;
}
bool UserPreferences::alertOnLiquidationsIsSet() const
{
    return m_AlertOnLiquidationsIsSet;
}

void UserPreferences::unsetAlertOnLiquidations()
{
    m_AlertOnLiquidationsIsSet = false;
}

bool UserPreferences::isAnimationsEnabled() const
{
    return m_AnimationsEnabled;
}


void UserPreferences::setAnimationsEnabled(bool value)
{
    m_AnimationsEnabled = value;
    m_AnimationsEnabledIsSet = true;
}
bool UserPreferences::animationsEnabledIsSet() const
{
    return m_AnimationsEnabledIsSet;
}

void UserPreferences::unsetAnimationsEnabled()
{
    m_AnimationsEnabledIsSet = false;
}

utility::datetime UserPreferences::getAnnouncementsLastSeen() const
{
    return m_AnnouncementsLastSeen;
}


void UserPreferences::setAnnouncementsLastSeen(utility::datetime value)
{
    m_AnnouncementsLastSeen = value;
    m_AnnouncementsLastSeenIsSet = true;
}
bool UserPreferences::announcementsLastSeenIsSet() const
{
    return m_AnnouncementsLastSeenIsSet;
}

void UserPreferences::unsetAnnouncementsLastSeen()
{
    m_AnnouncementsLastSeenIsSet = false;
}

double UserPreferences::getChatChannelID() const
{
    return m_ChatChannelID;
}


void UserPreferences::setChatChannelID(double value)
{
    m_ChatChannelID = value;
    m_ChatChannelIDIsSet = true;
}
bool UserPreferences::chatChannelIDIsSet() const
{
    return m_ChatChannelIDIsSet;
}

void UserPreferences::unsetChatChannelID()
{
    m_ChatChannelIDIsSet = false;
}

utility::string_t UserPreferences::getColorTheme() const
{
    return m_ColorTheme;
}


void UserPreferences::setColorTheme(utility::string_t value)
{
    m_ColorTheme = value;
    m_ColorThemeIsSet = true;
}
bool UserPreferences::colorThemeIsSet() const
{
    return m_ColorThemeIsSet;
}

void UserPreferences::unsetColorTheme()
{
    m_ColorThemeIsSet = false;
}

utility::string_t UserPreferences::getCurrency() const
{
    return m_Currency;
}


void UserPreferences::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool UserPreferences::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void UserPreferences::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

bool UserPreferences::isDebug() const
{
    return m_Debug;
}


void UserPreferences::setDebug(bool value)
{
    m_Debug = value;
    m_DebugIsSet = true;
}
bool UserPreferences::debugIsSet() const
{
    return m_DebugIsSet;
}

void UserPreferences::unsetDebug()
{
    m_DebugIsSet = false;
}

std::vector<utility::string_t>& UserPreferences::getDisableEmails()
{
    return m_DisableEmails;
}

void UserPreferences::setDisableEmails(std::vector<utility::string_t> value)
{
    m_DisableEmails = value;
    m_DisableEmailsIsSet = true;
}
bool UserPreferences::disableEmailsIsSet() const
{
    return m_DisableEmailsIsSet;
}

void UserPreferences::unsetDisableEmails()
{
    m_DisableEmailsIsSet = false;
}

std::vector<utility::string_t>& UserPreferences::getHideConfirmDialogs()
{
    return m_HideConfirmDialogs;
}

void UserPreferences::setHideConfirmDialogs(std::vector<utility::string_t> value)
{
    m_HideConfirmDialogs = value;
    m_HideConfirmDialogsIsSet = true;
}
bool UserPreferences::hideConfirmDialogsIsSet() const
{
    return m_HideConfirmDialogsIsSet;
}

void UserPreferences::unsetHideConfirmDialogs()
{
    m_HideConfirmDialogsIsSet = false;
}

bool UserPreferences::isHideConnectionModal() const
{
    return m_HideConnectionModal;
}


void UserPreferences::setHideConnectionModal(bool value)
{
    m_HideConnectionModal = value;
    m_HideConnectionModalIsSet = true;
}
bool UserPreferences::hideConnectionModalIsSet() const
{
    return m_HideConnectionModalIsSet;
}

void UserPreferences::unsetHideConnectionModal()
{
    m_HideConnectionModalIsSet = false;
}

bool UserPreferences::isHideFromLeaderboard() const
{
    return m_HideFromLeaderboard;
}


void UserPreferences::setHideFromLeaderboard(bool value)
{
    m_HideFromLeaderboard = value;
    m_HideFromLeaderboardIsSet = true;
}
bool UserPreferences::hideFromLeaderboardIsSet() const
{
    return m_HideFromLeaderboardIsSet;
}

void UserPreferences::unsetHideFromLeaderboard()
{
    m_HideFromLeaderboardIsSet = false;
}

bool UserPreferences::isHideNameFromLeaderboard() const
{
    return m_HideNameFromLeaderboard;
}


void UserPreferences::setHideNameFromLeaderboard(bool value)
{
    m_HideNameFromLeaderboard = value;
    m_HideNameFromLeaderboardIsSet = true;
}
bool UserPreferences::hideNameFromLeaderboardIsSet() const
{
    return m_HideNameFromLeaderboardIsSet;
}

void UserPreferences::unsetHideNameFromLeaderboard()
{
    m_HideNameFromLeaderboardIsSet = false;
}

std::vector<utility::string_t>& UserPreferences::getHideNotifications()
{
    return m_HideNotifications;
}

void UserPreferences::setHideNotifications(std::vector<utility::string_t> value)
{
    m_HideNotifications = value;
    m_HideNotificationsIsSet = true;
}
bool UserPreferences::hideNotificationsIsSet() const
{
    return m_HideNotificationsIsSet;
}

void UserPreferences::unsetHideNotifications()
{
    m_HideNotificationsIsSet = false;
}

utility::string_t UserPreferences::getLocale() const
{
    return m_Locale;
}


void UserPreferences::setLocale(utility::string_t value)
{
    m_Locale = value;
    m_LocaleIsSet = true;
}
bool UserPreferences::localeIsSet() const
{
    return m_LocaleIsSet;
}

void UserPreferences::unsetLocale()
{
    m_LocaleIsSet = false;
}

std::vector<utility::string_t>& UserPreferences::getMsgsSeen()
{
    return m_MsgsSeen;
}

void UserPreferences::setMsgsSeen(std::vector<utility::string_t> value)
{
    m_MsgsSeen = value;
    m_MsgsSeenIsSet = true;
}
bool UserPreferences::msgsSeenIsSet() const
{
    return m_MsgsSeenIsSet;
}

void UserPreferences::unsetMsgsSeen()
{
    m_MsgsSeenIsSet = false;
}

std::shared_ptr<Object> UserPreferences::getOrderBookBinning() const
{
    return m_OrderBookBinning;
}


void UserPreferences::setOrderBookBinning(std::shared_ptr<Object> value)
{
    m_OrderBookBinning = value;
    m_OrderBookBinningIsSet = true;
}
bool UserPreferences::orderBookBinningIsSet() const
{
    return m_OrderBookBinningIsSet;
}

void UserPreferences::unsetOrderBookBinning()
{
    m_OrderBookBinningIsSet = false;
}

utility::string_t UserPreferences::getOrderBookType() const
{
    return m_OrderBookType;
}


void UserPreferences::setOrderBookType(utility::string_t value)
{
    m_OrderBookType = value;
    m_OrderBookTypeIsSet = true;
}
bool UserPreferences::orderBookTypeIsSet() const
{
    return m_OrderBookTypeIsSet;
}

void UserPreferences::unsetOrderBookType()
{
    m_OrderBookTypeIsSet = false;
}

bool UserPreferences::isOrderClearImmediate() const
{
    return m_OrderClearImmediate;
}


void UserPreferences::setOrderClearImmediate(bool value)
{
    m_OrderClearImmediate = value;
    m_OrderClearImmediateIsSet = true;
}
bool UserPreferences::orderClearImmediateIsSet() const
{
    return m_OrderClearImmediateIsSet;
}

void UserPreferences::unsetOrderClearImmediate()
{
    m_OrderClearImmediateIsSet = false;
}

bool UserPreferences::isOrderControlsPlusMinus() const
{
    return m_OrderControlsPlusMinus;
}


void UserPreferences::setOrderControlsPlusMinus(bool value)
{
    m_OrderControlsPlusMinus = value;
    m_OrderControlsPlusMinusIsSet = true;
}
bool UserPreferences::orderControlsPlusMinusIsSet() const
{
    return m_OrderControlsPlusMinusIsSet;
}

void UserPreferences::unsetOrderControlsPlusMinus()
{
    m_OrderControlsPlusMinusIsSet = false;
}

bool UserPreferences::isShowLocaleNumbers() const
{
    return m_ShowLocaleNumbers;
}


void UserPreferences::setShowLocaleNumbers(bool value)
{
    m_ShowLocaleNumbers = value;
    m_ShowLocaleNumbersIsSet = true;
}
bool UserPreferences::showLocaleNumbersIsSet() const
{
    return m_ShowLocaleNumbersIsSet;
}

void UserPreferences::unsetShowLocaleNumbers()
{
    m_ShowLocaleNumbersIsSet = false;
}

std::vector<utility::string_t>& UserPreferences::getSounds()
{
    return m_Sounds;
}

void UserPreferences::setSounds(std::vector<utility::string_t> value)
{
    m_Sounds = value;
    m_SoundsIsSet = true;
}
bool UserPreferences::soundsIsSet() const
{
    return m_SoundsIsSet;
}

void UserPreferences::unsetSounds()
{
    m_SoundsIsSet = false;
}

bool UserPreferences::isStrictIPCheck() const
{
    return m_StrictIPCheck;
}


void UserPreferences::setStrictIPCheck(bool value)
{
    m_StrictIPCheck = value;
    m_StrictIPCheckIsSet = true;
}
bool UserPreferences::strictIPCheckIsSet() const
{
    return m_StrictIPCheckIsSet;
}

void UserPreferences::unsetStrictIPCheck()
{
    m_StrictIPCheckIsSet = false;
}

bool UserPreferences::isStrictTimeout() const
{
    return m_StrictTimeout;
}


void UserPreferences::setStrictTimeout(bool value)
{
    m_StrictTimeout = value;
    m_StrictTimeoutIsSet = true;
}
bool UserPreferences::strictTimeoutIsSet() const
{
    return m_StrictTimeoutIsSet;
}

void UserPreferences::unsetStrictTimeout()
{
    m_StrictTimeoutIsSet = false;
}

utility::string_t UserPreferences::getTickerGroup() const
{
    return m_TickerGroup;
}


void UserPreferences::setTickerGroup(utility::string_t value)
{
    m_TickerGroup = value;
    m_TickerGroupIsSet = true;
}
bool UserPreferences::tickerGroupIsSet() const
{
    return m_TickerGroupIsSet;
}

void UserPreferences::unsetTickerGroup()
{
    m_TickerGroupIsSet = false;
}

bool UserPreferences::isTickerPinned() const
{
    return m_TickerPinned;
}


void UserPreferences::setTickerPinned(bool value)
{
    m_TickerPinned = value;
    m_TickerPinnedIsSet = true;
}
bool UserPreferences::tickerPinnedIsSet() const
{
    return m_TickerPinnedIsSet;
}

void UserPreferences::unsetTickerPinned()
{
    m_TickerPinnedIsSet = false;
}

utility::string_t UserPreferences::getTradeLayout() const
{
    return m_TradeLayout;
}


void UserPreferences::setTradeLayout(utility::string_t value)
{
    m_TradeLayout = value;
    m_TradeLayoutIsSet = true;
}
bool UserPreferences::tradeLayoutIsSet() const
{
    return m_TradeLayoutIsSet;
}

void UserPreferences::unsetTradeLayout()
{
    m_TradeLayoutIsSet = false;
}

}
}
}
}
