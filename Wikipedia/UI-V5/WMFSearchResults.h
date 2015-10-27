
@import Foundation;
#import <Mantle/Mantle.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMFSearchResults : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSString* searchTerm;
@property (nonatomic, strong, readonly) NSArray* results;
@property (nonatomic, copy, nullable, readonly) NSString* searchSuggestion;

- (instancetype)initWithSearchTerm:(NSString*)searchTerm
                          articles:(nullable NSArray*)articles
                  searchSuggestion:(nullable NSString*)suggestion;
//
//- (BOOL)noResults;
//
@end

NS_ASSUME_NONNULL_END