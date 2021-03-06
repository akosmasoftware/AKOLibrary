//
//  AKOArrowView.m
//  AKOLibrary
//
//  Created by Adrian on 5/16/11.
//  Copyright (c) 2009, 2010, 2011, Adrian Kosmaczewski & akosma software
//  All rights reserved.
//  
//  Use in source and/or binary forms without modification is permitted following the
//  instructions in the LICENSE file.
//  
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
//  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
//  OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import "AKOArrowView.h"


@implementation AKOArrowView

- (void)setup
{
    NSMutableArray *points = [NSMutableArray array];
    NSValue *value1 = [NSValue valueWithCGPoint:CGPointMake(0.0, 0.0)];
    [points addObject:value1];
    NSValue *value2 = [NSValue valueWithCGPoint:CGPointMake(0.0, self.frame.size.height)];
    [points addObject:value2];
    NSValue *value3 = [NSValue valueWithCGPoint:CGPointMake(self.frame.size.width, self.frame.size.height / 2.0)];
    [points addObject:value3];
    
    self.points = points;
    self.width = 2.0;
    self.mode = AKOLineViewModeFill;
}

@end
