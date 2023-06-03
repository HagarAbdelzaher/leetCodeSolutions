/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s , stack=[]) {
       for (const bracket of s.split('')) {
            const isParenthesis = bracket ==='(';
            if (isParenthesis) stack.push(')');
            
            const isCurly = bracket ==='{';
            if(isCurly) stack.push('}');
            
            const isSquare = bracket ==='[';
            if (isSquare) stack.push(']');
    
    
            const isOpen = isParenthesis || isCurly || isSquare;
            if(isOpen) continue;

            const isEmpty = !stack.length;
            const isWrongPair = stack.pop() !== bracket;
            const inValid = isEmpty|| isWrongPair;
            if(inValid) return false;
        }
    return (stack.length ===0);
};