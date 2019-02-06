/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.0-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.BitMexApi) {
      root.BitMexApi = {};
    }
    root.BitMexApi.Trade = factory(root.BitMexApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The Trade model module.
   * @module model/Trade
   * @version 1.2.0
   */

  /**
   * Constructs a new <code>Trade</code>.
   * Individual &amp; Bucketed Trades
   * @alias module:model/Trade
   * @class
   * @param timestamp {Date} 
   * @param symbol {String} 
   */
  var exports = function(timestamp, symbol) {
    var _this = this;

    _this['timestamp'] = timestamp;
    _this['symbol'] = symbol;








  };

  /**
   * Constructs a <code>Trade</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Trade} obj Optional instance to populate.
   * @return {module:model/Trade} The populated <code>Trade</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('timestamp')) {
        obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
      }
      if (data.hasOwnProperty('symbol')) {
        obj['symbol'] = ApiClient.convertToType(data['symbol'], 'String');
      }
      if (data.hasOwnProperty('side')) {
        obj['side'] = ApiClient.convertToType(data['side'], 'String');
      }
      if (data.hasOwnProperty('size')) {
        obj['size'] = ApiClient.convertToType(data['size'], 'Number');
      }
      if (data.hasOwnProperty('price')) {
        obj['price'] = ApiClient.convertToType(data['price'], 'Number');
      }
      if (data.hasOwnProperty('tickDirection')) {
        obj['tickDirection'] = ApiClient.convertToType(data['tickDirection'], 'String');
      }
      if (data.hasOwnProperty('trdMatchID')) {
        obj['trdMatchID'] = ApiClient.convertToType(data['trdMatchID'], 'String');
      }
      if (data.hasOwnProperty('grossValue')) {
        obj['grossValue'] = ApiClient.convertToType(data['grossValue'], 'Number');
      }
      if (data.hasOwnProperty('homeNotional')) {
        obj['homeNotional'] = ApiClient.convertToType(data['homeNotional'], 'Number');
      }
      if (data.hasOwnProperty('foreignNotional')) {
        obj['foreignNotional'] = ApiClient.convertToType(data['foreignNotional'], 'Number');
      }
    }
    return obj;
  }

  /**
   * @member {Date} timestamp
   */
  exports.prototype['timestamp'] = undefined;
  /**
   * @member {String} symbol
   */
  exports.prototype['symbol'] = undefined;
  /**
   * @member {String} side
   */
  exports.prototype['side'] = undefined;
  /**
   * @member {Number} size
   */
  exports.prototype['size'] = undefined;
  /**
   * @member {Number} price
   */
  exports.prototype['price'] = undefined;
  /**
   * @member {String} tickDirection
   */
  exports.prototype['tickDirection'] = undefined;
  /**
   * @member {String} trdMatchID
   */
  exports.prototype['trdMatchID'] = undefined;
  /**
   * @member {Number} grossValue
   */
  exports.prototype['grossValue'] = undefined;
  /**
   * @member {Number} homeNotional
   */
  exports.prototype['homeNotional'] = undefined;
  /**
   * @member {Number} foreignNotional
   */
  exports.prototype['foreignNotional'] = undefined;



  return exports;
}));

